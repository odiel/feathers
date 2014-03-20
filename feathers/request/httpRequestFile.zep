
namespace Feathers\Request;

class HttpRequestFile extends \Types\IO\FileAbstract
{

	public function copyTo(string! path)
	{
		return true;
	}

	public function moveTo(string! path)
	{
		return true;
	}

	public function rename(string! name)
	{
		return true;
	}
}
