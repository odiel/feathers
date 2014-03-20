<?php 

namespace Tests\Feathers\Router;

class RouteTest extends \PHPUnit_Framework_TestCase
{

	public function testConstructor()
	{
		$destination = $this->getMock('\Feathers\Router\DestinationInterface');

		$methods = new \Feathers\Router\MethodsCollection();
		$methods->add('GET');
		$methods->add('PUT');

		$pattern = 'pattern';

		$route = new \Feathers\Router\Route($pattern, $destination, $methods);

		$this->assertEquals($destination, $route->getDestination());
		$this->assertEquals($methods, $route->getMethods());
		$this->assertEquals($pattern, $route->getPattern());
	}

}

