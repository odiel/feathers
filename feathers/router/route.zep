
namespace Feathers\Router;

class Route
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

	/**
	 * Phalcon\Mvc\Router\Route constructor
	 *
	 * @param string pattern
	 * @param array paths
	 * @param array|string httpMethods
	 */
	public function __construct(string! pattern, <\Feathers\Router\DestinationInterface> destination, <\Feathers\Router\MethodsCollection> methods = null)
	{
		let this->_destination = destination;
		let this->_pattern = pattern;
		let this->_methods = methods;
	}

	public function handle()
	{
		this->_destination->beforeHandle(["url": "lol"]);
		this->_destination->handle();
		this->_destination->afterHandle();
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


}