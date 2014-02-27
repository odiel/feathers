
namespace Feathers\Router;

interface DestinationInterface
{

	public function beforeHandle(array! request);

	public function handle();

	public function afterHandle();

}