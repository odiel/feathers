namespace Feathers\Types\Net;

use Feathers\Types\Net\Exceptions\IpV4\InvalidFormatException;
use Feathers\Types\Net\Exceptions\IpV4\OctetOutOfRangeException;

class IpV4 implements AddressInterface
{

	const LOCALHOST = "localhost";

	private octet1;
	private octet2;
	private octet3;
	private octet4;

	public function __construct(string! address)
	{
		this->setFromString(address);
		
	}

	public function setFromString(string! address)
	{
		var parts;

		if address === IpV4::LOCALHOST {
			let address = "127.0.0.1";
		}

		let parts = explode(".", address);

		if count(parts) != 4 {
			throw new InvalidFormatException("Invalid Ip address format.");
		}

		this->setFromOctets(parts[0], parts[1], parts[2], parts[3]);
	}

	public function setFromOctets(int octet1, int octet2, int octet3, int octet4)
	{
		if octet1 < 0 || octet1 > 255 {
			throw new OctetOutOfRangeException("Octet 1 is out of range.");
		}

		if octet2 < 0 || octet2 > 255 {
			throw new OctetOutOfRangeException("Octet 2 is out of range.");
		}

		if octet3 < 0 || octet3 > 255 {
			throw new OctetOutOfRangeException("Octet 3 is out of range.");
		}

		if octet4 < 0 || octet4 > 255 {
			throw new OctetOutOfRangeException("Octet 4 is out of range.");
		}

		let this->octet1 = octet1;
		let this->octet2 = octet2;
		let this->octet3 = octet3;
		let this->octet4 = octet4;
	}

	public function __toString() -> string
	{
		return this->octet1.".".this->octet2.".".this->octet3.".".this->octet4;
	}

}