namespace Feathers\Request\Http;

class Request extends \Feathers\Request\RequestAbstract implements RequestInterface
{

	protected _rawBody;

	public function __construct()
	{
	}


	public function getServer(string! name) -> string
	{
		var value;

		if fetch value, _SERVER[name] {
			return value;
		}

		return "";
	}

	public function getQuery(string! name, defaultValue = null) -> string
	{
		var value;

		if fetch value, _GET[name] {
			return value;
		}

		return defaultValue;
	}

	public function getPost(string! name, defaultValue = null) -> string
	{
		var value;

		if fetch value, _POST[name] {
			return value;
		}

		return defaultValue;
	}

	public function has(string! name) -> boolean
	{
		return isset _REQUEST[name];
	}

	public function hasQuery(string! name) -> boolean
	{
		return isset _GET[name];
	}

	public function hasPost(string! name) -> boolean
	{
		return isset _POST[name];
	}

	public function hasServer(string! name) -> boolean
	{
		return isset _SERVER[name];
	}

	public function getHeader(string! header) -> string
	{
		var serverValue, headerValue;

		if fetch serverValue, _SERVER[header] {
			return serverValue;
		} else {
			if fetch headerValue, _SERVER["HTTP_" . header] {
				return headerValue;
			}
		}

		return "";
	}

	public function getScheme() -> string
	{
		var https, scheme;

		let https = this->getServer("HTTPS");
		if https {
			if https == "off" {
				let scheme = "http";
			} else {
				let scheme = "https";
			}
		} else {
			let scheme = "http";
		}

		return scheme;
	}

	public function isAjax() -> boolean
	{
		return this->getHeader("HTTP_X_REQUESTED_WITH") == "XMLHttpRequest";
	}

	public function isSoap() -> boolean
	{
		var server, contentType;

		let server = _SERVER;
		if isset server["HTTP_SOAPACTION"] {
			return true;
		} else {
			if fetch contentType, server["CONTENT_TYPE"] {
				return memstr(contentType, "application/soap+xml");
			}
		}
		return false;
	}

	public function isSecure() -> boolean
	{
		return this->getScheme() === "https";
	}

	public function getRawBody() -> string
	{
		var rawBody, contents;

		let rawBody = this->_rawBody;
		if empty rawBody {

			let contents = file_get_contents("php://input");

			/**
			 * We need store the read raw body because it can't be read again
			 */
			let this->_rawBody = contents;

			return contents;
		}

		return rawBody;
	}

	public function getJsonRawBody()
	{
		var rawBody;

		let rawBody = this->getRawBody();
		if typeof rawBody == "string" {
			return json_decode(rawBody);
		}

		return false;
	}

	public function getServerAddress() -> string
	{
		var server, serverAddr;

		let server = _SERVER;
		if fetch serverAddr, server["SERVER_ADDR"] {
			return serverAddr;
		}

		return gethostbyname("localhost");
	}

	public function getServerName() -> string
	{
		var server, serverName;

		let server = _SERVER;
		if fetch serverName, server["SERVER_NAME"] {
			return serverName;
		}

		return "localhost";
	}

	public function getHttpHost() -> string
	{
		var httpHost, scheme, name, port;

		/**
		 * Get the server name from _SERVER['HTTP_HOST']
		 */
		let httpHost = this->getServer("HTTP_HOST");
		if httpHost {
			return httpHost;
		}

		/**
		 * Get current scheme
		 */
		let scheme = this->getScheme();

		/**
		 * Get the server name from _SERVER['SERVER_NAME']
		 */
		let name = this->getServer("SERVER_NAME");

		/**
		 * Get the server port from _SERVER['SERVER_PORT']
		 */
		let port = this->getServer("SERVER_PORT");

		/**
		 * If is standard http we return the server name only
		 */
		if scheme == "http" && port == 80  {
			return name;
		}

		/**
		 * If is standard secure http we return the server name only
		 */
		if scheme == "https" && port == "443" {
			return name;
		}

		return name . ":" . port;
	}

	public function getClientAddress(boolean trustForwardedHeader = false) -> string | boolean
	{
		var address;

		let address = null;

		/**
		 * Proxies uses this IP</comment>
		 */
		if trustForwardedHeader {
			fetch address, _SERVER["HTTP_X_FORWARDED_FOR"];
		}

		if address === null {
			fetch address, _SERVER["REMOTE_ADDR"];
		}

		if typeof address == "string" {
			if memstr(address, ",") {
				/**
				 * The client address has multiples parts, only return the first part
				 */
				return explode(",", address)[0];
			}
			return address;
		}

		return false;
	}

	public function getUserAgent() -> string
	{
		var userAgent;

		if fetch userAgent, _SERVER["HTTP_USER_AGENT"] {
			return userAgent;
		}

		return "";
	}

	public function getMethod() -> string
	{
		var requestMethod;

		if fetch requestMethod, _SERVER["REQUEST_METHOD"] {
			return requestMethod;
		}

		return "";
	}

	public function isMethod(var methods) -> boolean
	{
		var httpMethod, method;

		let httpMethod = this->getMethod();

		if typeof methods == "string" {
			return methods == httpMethod;
		} else {
			if typeof methods == "array" {
				for method in methods {
					if method == httpMethod {
						return true;
					}
				}
			}
		}
		return false;
	}

	/**
	 * Checks whether HTTP method is POST. if _SERVER["REQUEST_METHOD"]=="POST"
	 *
	 * @return boolean
	 */
	public function isPost() -> boolean
	{
		return this->getMethod() == "POST";
	}

	/**
	 *
	 * Checks whether HTTP method is GET. if _SERVER["REQUEST_METHOD"]=="GET"
	 *
	 * @return boolean
	 */
	public function isGet() -> boolean
	{
		return this->getMethod() == "GET";
	}

	/**
	 * Checks whether HTTP method is PUT. if _SERVER["REQUEST_METHOD"]=="PUT"
	 *
	 * @return boolean
	 */
	public function isPut() -> boolean
	{
		return this->getMethod() == "PUT";
	}

	/**
	 * Checks whether HTTP method is PATCH. if _SERVER["REQUEST_METHOD"]=="PATCH"
	 *
	 * @return boolean
	 */
	public function isPatch() -> boolean
	{
		return this->getMethod() == "PATCH";
	}

	/**
	 * Checks whether HTTP method is HEAD. if _SERVER["REQUEST_METHOD"]=="HEAD"
	 *
	 * @return boolean
	 */
	public function isHead() -> boolean
	{
		return this->getMethod() == "HEAD";
	}

	/**
	 * Checks whether HTTP method is DELETE. if _SERVER["REQUEST_METHOD"]=="DELETE"
	 *
	 * @return boolean
	 */
	public function isDelete() -> boolean
	{
		return this->getMethod() == "DELETE";
	}

	/**
	 * Checks whether HTTP method is OPTIONS. if _SERVER["REQUEST_METHOD"]=="OPTIONS"
	 *
	 * @return boolean
	 */
	public function isOptions() -> boolean
	{
		return this->getMethod() == "OPTIONS";
	}

	/**
	 * Returns the available headers in the request
	 *
	 * @return array
	 */
	public function getHeaders() -> <\Feathers\Request\HeadersCollection>
	{
		var headers, key, value;

		let headers = new \Feathers\Request\HeadersCollection();

		for key, value in _SERVER {
			if starts_with(key, "HTTP_") {
				var header;
				let header = new \Feathers\Request\Header(str_replace("HTTP_", "", key), value);
				headers->add(header);
			}
		}

		return headers;
	}

	/**
	 * Checks whether request include attached files
	 *
	 * @return boolean
	 */
	public function hasFiles(boolean onlySuccessful = false) -> long
	{
		var files, file, error;
		int numberFiles = 0;

		let files = _FILES;

		if typeof files != "array" {
			return 0;
		}

		for file in files {
			if fetch error, file["error"] {

				if typeof error != "array" {
					if !error || !onlySuccessful {
						let numberFiles++;
					}
				}

				if typeof error == "array" {
					let numberFiles += this->_hasFileHelper(error, onlySuccessful);
				}
			}
		}

		return numberFiles;
	}

	public function getUploadedFiles(boolean onlySuccessful=false) -> <\Feathers\Request\FilesCollection>
	{
		var filesCollection, superFiles, file, error, name, type, tmpName, size, prefix;

		let filesCollection = new \Feathers\Request\FilesCollection();

		let superFiles = _FILES;

		if typeof superFiles != "array" || !count(superFiles) {
			return filesCollection;
		}

		for file in superFiles {

			if fetch error, file["error"] {

				if typeof error != "array" {
					if !error || !onlySuccessful {
						filesCollection->add(new \Feathers\Request\HttpRequestFile(file));
					}
				}

				if typeof error == "array"
					&& fetch name, file["name"]
					&& fetch type, file["type"]
					&& fetch tmpName, file["tmpName"]
					&& fetch size, file["size"]
				{
					let prefix = "fix-me";
				}
			}
		}

/*


		let files = [];
		

		*/

		return filesCollection;
	}





	private function _hasFileHelper(data, boolean onlySuccessful) -> long
	{
		var value;
		int numberFiles = 0;

		if typeof data != "array" {
			return 1;
		}

		for value in data {
			if typeof value != "array" {
				if !value || !onlySuccessful {
					let numberFiles++;
				}
			}

			if typeof value == "array" {
				let numberFiles += this->_hasFileHelper(value, onlySuccessful);
			}
		}

		return numberFiles;
	}
}