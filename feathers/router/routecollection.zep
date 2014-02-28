
namespace Feathers\Router;

class RouteCollection implements \IteratorAggregate, \Countable
{

	private _methods;

	public function __construct()
	{
		let this->_methods = [];
	}

	public function getIterator()
	{
		return new \ArrayIterator(this->_methods);
	}

	public function count()
	{
		return count(this->_methods);
	}

	public function add(string! method)
	{
		let this->_methods[method] = method;
	}

}