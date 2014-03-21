
namespace Feathers\Request;

class FilesCollection implements \IteratorAggregate, \Countable
{

	private _files;

	public function __construct()
	{
		let this->_files = [];
	}

	public function getIterator()
	{
		return new \ArrayIterator(this->_files);
	}

	public function count()
	{
		return count(this->_files);
	}

	public function add(<\Feathers\Types\IO\FileInterface> file)
	{
		let this->_files[(string) file] = file;
	}

}