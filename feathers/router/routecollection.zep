
namespace Feathers\Router;

class RouteCollection implements \IteratorAggregate, \Countable
{

	private _routes;

	public function __construct()
	{
		let this->_routes = [];
	}

	public function getIterator()
	{
		return new \ArrayIterator(this->_routes);
	}

	public function count()
	{
		return count(this->_routes);
	}

	public function add(<\Feathers\Router\Route> route)
	{
		var routeName = "";

		let routeName = route->getName();

		if (routeName == "" || routeName == null) {
			throw new \Exception("Routes must have a name.");
		}

		if (isset(this->_routes[routeName])) {
			throw new \Exception("A Route was already defined with the same name.");
		}

		let this->_methods[routeName] = route;
	}

}