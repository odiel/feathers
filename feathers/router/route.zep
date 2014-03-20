
namespace Feathers\Router;

class Route implements RouteInterface
{
	

	protected _paths;

	protected _hostname;

	protected _converters;

	protected _id;

	protected _beforeMatch;

	protected static _uniqueId;

	
	protected _pattern;

	protected _compiledPattern;

	protected _destination;

	protected _methods;

	protected _name;


	public function __construct(string! pattern, <\Feathers\Router\DestinationInterface> destination, <\Feathers\Router\MethodsCollection> methods = null)
	{
		let this->_destination = destination;
		let this->_methods = methods;

		this->reConfigure(pattern);
	}

	public function handle()
	{
		this->_destination->beforeHandle(["url": "lol"]);
		this->_destination->handle();
		this->_destination->afterHandle();
	}

	public function getDestination() -> <\Feathers\Router\DestinationInterface>
	{
		return this->_destination;
	}

	public function getPattern() -> string
	{
		return this->_pattern;
	}

	public function getCompiledPattern() -> string
	{
		return $this->_compiledPattern;
	}

	public function setMethods(<\Feathers\Router\MethodsCollection> methods)
	{
		let this->_methods = methods;

		return this;
	}

	public function getMethods() -> <\Feathers\Router\MethodsCollection>
	{
		return this->_methods;
	}

	public function setName(string! name)
	{
		let this->_name = name;

		return this;
	}

	public function getName() -> string
	{
		return this->_name;
	}


	public function reConfigure(string! pattern, paths=null)
	{
		var routePaths, pcrePattern, compiledPattern, extracted;

		/**
		 * If the route starts with '#' we assume that it is a regular expression
		 */
		if !starts_with(pattern, "#") {

			if memstr(pattern, "{") {
				/**
				 * The route has named parameters so we need to extract them
				 */
				let extracted = this->extractNamedParams(pattern),
					pcrePattern = extracted[0],
					routePaths = extracted[1];
			} else {
				let pcrePattern = pattern;
			}

			/**
			 * Transform the route's pattern to a regular expression
			 */
			let compiledPattern = this->compilePattern(pcrePattern);
		} else {
			let compiledPattern = pattern;
		}

		/**
		 * Update the original pattern
		 */
		let this->_pattern = pattern;

		/**
		 * Update the compiled pattern
		 */
		let this->_compiledPattern = compiledPattern;
	}


	public function extractNamedParams(string! pattern)
	{

		char ch;
		var tmp, matches;
		boolean notValid;
		int cursor, cursorVar, marker, bracketCount = 0, parenthesesCount = 0, foundPattern = 0;
		int intermediate = 0, numberMatches = 0;
		string route, item, variable, regexp;

		if strlen(pattern) <= 0 {
			return false;
		}

		let matches = [],
		route = "";

		for cursor, ch in pattern {

			if parenthesesCount == 0 {
				if ch == '{' {
					if bracketCount == 0 {
						let marker = cursor + 1,
							intermediate = 0,
							notValid = false;
					}
					let bracketCount++;
				} else {
					if ch == '}' {
						let bracketCount--;
						if intermediate > 0 {
							if bracketCount == 0 {

								let numberMatches++,
									variable = null,
									regexp = null,
									item = (string) substr(pattern, marker, cursor - marker);

								for cursorVar, ch in item {

									if ch == '\0' {
										break;
									}

									if cursorVar == 0 && !((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
										let notValid = true;
										break;
									}

									if (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <='9') || ch == '-' || ch == '_' || ch ==  ':' {
										if ch == ':' {
											let variable = (string) substr(item, 0, cursorVar),
												regexp = (string) substr(item, cursorVar + 1);
											break;
										}
									} else {
										let notValid = true;
										break;
									}

								}

								if !notValid {

									let tmp = numberMatches;

									if variable && regexp {

										let foundPattern = 0;
										for ch in regexp {
											if ch == '\0' {
												break;
											}
											if !foundPattern {
												if ch == '(' {
													let foundPattern = 1;
												}
											} else {
												if ch == ')' {
													let foundPattern = 2;
													break;
												}
											}
 										}

										if foundPattern != 2 {
											let route .= '(',
												route .= regexp,
												route .= ')';
										} else {
											let route .= regexp;
										}
										let matches[variable] = tmp;
									} else {
										let route .= "([^/]*)",
											matches[item] = tmp;
									}
								} else {
									let route .= '{',
										route .= item,
										route .= '}';
								}
								continue;
							}
						}
					}
				}
			}

			if bracketCount == 0 {
				if ch == '(' {
					let parenthesesCount++;
				} else {
					if ch == ')' {
						let parenthesesCount--;
						if parenthesesCount == 0 {
							let numberMatches++;
						}
					}
				}
			}

			if bracketCount > 0 {
				let intermediate++;
			} else {
				let route .= ch;
			}
		}

		return [route, matches];
	}


	public function compilePattern(string! pattern)
	{
		var idPattern;

		// If a pattern contains ':', maybe there are placeholders to replace
		if memstr(pattern, ":") {

			// This is a pattern for valid identifiers
			let idPattern = "/([a-zA-Z0-9\\_\\-]+)";

			
		}

		// Check if the pattern has parantheses in order to add the regex delimiters
		if memstr(pattern, "(") {
			return "#^" . pattern . "$#";
		}

		// Square brackets are also checked
		if memstr(pattern, "[") {
			return "#^" . pattern . "$#";
		}

		return pattern;
	}

}