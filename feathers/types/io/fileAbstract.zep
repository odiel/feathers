
namespace Feathers\Types\IO;

abstract class FileAbstract implements FileInterface
{

	private $_name;

	private $_path;

	private $_size;

	private $_extension;

	private $_type;

	private $_permissions;


	public function getSize() -> long
	{
		return this->_size;
	}

	public function getName() -> string
	{
		return this->_name;
	}

	public function getPath() -> string
	{
		return this->_path;
	}

	public function getExtension() -> string
	{
		return this->_extension;
	}

	public function getType() -> string
	{
		return this->_type;
	}

	public function getPermissions() -> string
	{
		return this->_permissions;
	}


	protected function setSize(long size) -> <\Types\IO\FileInterface>
	{
		let this->_size = size;

		return this;
	}

	protected function setName(string! name) -> <\Types\IO\FileInterface>
	{
		let this->_name = name;

		return this;
	}

	protected function setPath(string! path) -> <\Types\IO\FileInterface>
	{
		let this->_path = path;

		return this;
	}

	protected function setExtension(string! extension) -> <\Types\IO\FileInterface>
	{
		let this->_extension = extension;

		return this;
	}

	protected function setType(string! type) -> <\Types\IO\FileInterface>
	{
		let this->_type = type;

		return this;
	}

	protected function setPermissions(string! permissions) -> <\Types\IO\FileInterface>
	{
		let this->_permissions = permissions;

		return this;
	}
}