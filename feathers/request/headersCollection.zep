
namespace Feathers\Request;

class HeadersCollection implements \IteratorAggregate, \Countable
{

	private _headers;

	public function __construct()
	{
		let this->_headers = [];
	}

	public function getIterator()
	{
		return new \ArrayIterator(this->_headers);
	}

	public function count()
	{
		return count(this->_headers);
	}

	public function add(<\Feathers\Request\HeaderInterface> header)
	{
		let this->_files[header->getName()] = header->getValue();
	}

}