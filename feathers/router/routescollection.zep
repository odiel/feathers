
namespace Feathers\Router;

class RoutesCollection implements \IteratorAggregate, \Countable
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
			throw new \Feathers\Router\Exceptions\RouteWithNoNameException("Route must have a name.");
		}

		if (isset(this->_routes[routeName])) {
			throw new \Feathers\Router\Exceptions\DuplicatedRouteNameException("A Route was already defined with the same name.");
		}

		let this->_routes[routeName] = route;
	}

}