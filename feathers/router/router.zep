namespace Feathers\Router;

class Router implements RouterInterface
{

	private _routes;


	public function __construct(<\Feathers\Router\RouteCollection> routes = null)
	{
		let this->_routes = new RoutesCollection();

		if (routes != null) {
			let this->_routes = routes;
		}
	}

	public function handle(string! uri = null)
	{

	}


	public function add(string! pattern, <\Feathers\Router\MethodsCollection> methods, string! name = null)
	{
		return this;
	}

	public function addGet(string! pattern, string! name = null)
	{
		return this;
	}

	public function addPost(string! pattern, string! name = null)
	{
		return this;
	}

	public function addPut(string! pattern, string! name = null)
	{
		return this;
	}

	public function addPatch(string! pattern, string! name = null)
	{
		return this;
	}

	public function addOptions(string! pattern, string! name = null)
	{
		return this;
	}

	public function addHead(string! pattern, string! name = null)
	{
		return this;
	}


	public function clear()
	{
		return this;
	}

	public function getMatchedRoute() -> <\Feathers\Router\Route>
	{

	}

	public function getRoutes() -> <\Feathers\Router\RouteCollection>
	{
		return this->_routes;
	}

	public function getRouteByName(string! name) -> <\Feathers\Router\Route>
	{

	}
	
}