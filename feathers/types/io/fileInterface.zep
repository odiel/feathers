
namespace Feathers\Types\IO;

interface FileInterface
{

	public function getSize() -> long;

	public function getName() -> string;

	public function getPath() -> string;

	public function getExtension() -> string;

	public function getType() -> string;

	public function getPermissions() -> string;


	public function copyTo(string! path) -> boolean;

	public function moveTo(string! path) -> boolean;

	public function rename(string! name) -> boolean;

}
