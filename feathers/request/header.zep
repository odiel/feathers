
namespace Feathers\Request;

class Header implements \Feathers\Request\HeaderInterface
{

	private _name;

	private _value;

	public function __construct (string! name, string! value)
	{
		let this->_name = name;
		let this->_value = value;
	}

	public function getName() -> string
	{
		return this->_name;
	}

	public function getValue() -> string
	{
		return this->_value;
	}

	public function __toString() -> string
	{
		return this->_name."=".this->_value;
	}
	
}