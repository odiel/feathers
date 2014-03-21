
namespace Feathers\Request;

interface HeaderInterface
{

	public function getName() -> string;

	public function getValue() -> string;
	
}