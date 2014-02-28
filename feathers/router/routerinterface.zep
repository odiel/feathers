
namespace Feathers\Router;

interface RouterInterface
{

	public function handle(string! uri = null);


	public function add(string! pattern, <\Feathers\Router\MethodsCollection> methods, string! name = null);

	public function addGet(string! pattern, string! name = null);

	public function addPost(string! pattern, string! name = null);

	public function addPut(string! pattern, string! name = null);

	public function addPatch(string! pattern, string! name = null);

	public function addOptions(string! pattern, string! name = null);

	public function addHead(string! pattern, string! name = null);


	public function clear();

	public function getMatchedRoute() -> <\Feathers\Router\Route>;

	public function getRoutes() -> <\Feathers\Router\RouteCollection>;

	public function getRouteByName(string! name) -> <\Feathers\Router\Route>;
}