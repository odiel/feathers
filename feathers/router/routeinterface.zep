

namespace Feathers\Router;

interface RouteInterface
{

	public function __construct(string! pattern, <\Feathers\Router\DestinationInterface> destination, <\Feathers\Router\MethodsCollection> methods = null);

	public function getDestination() -> <\Feathers\Router\DestinationInterface>;

	public function getPattern() -> string;

	public function getCompiledPattern() -> string;

	public function setMethods(<\Feathers\Router\MethodsCollection> methods);

	public function getMethods() -> <\Feathers\Router\MethodsCollection>;

	public function setName(string! name);

	public function getName() -> string;
}