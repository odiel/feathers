
namespace Feathers\Router;

class Route
{
	protected _pattern;

	protected _compiledPattern;

	protected _paths;

	protected _methods;

	protected _hostname;

	protected _converters;

	protected _id;

	protected _name;

	protected _beforeMatch;

	protected static _uniqueId;


	protected _destination;

	/**
	 * Phalcon\Mvc\Router\Route constructor
	 *
	 * @param string pattern
	 * @param array paths
	 * @param array|string httpMethods
	 */
	public function __construct(string! pattern, <\Feathers\Router\DestinationInterface> destination, array! httpMethods = null)
	{
		let this->_destination = destination;
	}

	public function handle()
	{
		this->_destination->handle(["url": "lol"]);
	}


}