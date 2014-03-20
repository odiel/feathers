<?php

$a = new \Types\Net\Ipv4("245.10.42.100");

class File extends \Types\IO\FileAbstract
{
	public function copyTo($path)
	{
		return true;
	}

	public function moveTo($path)
	{
		return true;
	}

	public function rename($path)
	{
		return true;
	}

}

echo($a);