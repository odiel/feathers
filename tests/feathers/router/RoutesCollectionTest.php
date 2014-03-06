<?php 

namespace Tests\Feathers\Router;

class RoutesCollectionTest extends \PHPUnit_Framework_TestCase
{

	private $collection;

	protected function setUp()
	{
		$this->collection = new \Feathers\Router\RoutesCollection();
	}

	public function testRoutesListIsInitializedOnceTheObjectIsConstructed()
	{
		$expected = new \ArrayIterator(array());

		$this->assertEquals($expected, $this->collection->getIterator());
	}

	public function testCountingTheAddedRoutes()
	{
		$destination = $this->getMock("\Feathers\Router\DestinationInterface");

		$route1 = new \Feathers\Router\Route('pattern1', $destination);
		$route1->setName('route1');

		$route2 = new \Feathers\Router\Route('pattern2', $destination);
		$route2->setName('route2');

		$this->collection->add($route1);
		$this->collection->add($route2);

		$this->assertEquals(2, $this->collection->count());
	}

	public function testAddingRoutes()
	{
		$destination = $this->getMock("\Feathers\Router\DestinationInterface");

		$route1 = new \Feathers\Router\Route('pattern1', $destination);
		$route1->setName('route1');

		$this->collection->add($route1);

		$expected = new \ArrayIterator(array($route1->getName() => $route1));

		$this->assertEquals($expected, $this->collection->getIterator());
	}

	/**
	 * @expectedException \Feathers\Router\Exceptions\RouteWithNoNameException
	 * @expectedExceptionMessage Route must have a name.
	 */
	public function testAddingRoutesWithNoNameException()
	{
		$destination = $this->getMock("\Feathers\Router\DestinationInterface");

		$route1 = new \Feathers\Router\Route('pattern1', $destination);


		try {
			$this->collection->add($route1);
		} catch (InvalidParameterException $e) {
			throw $e;
		}

		$this->fail('An expected exception has not been raised.');		
	}


	/**
	 * @expectedException \Feathers\Router\Exceptions\DuplicatedRouteNameException
	 * @expectedExceptionMessage A Route was already defined with the same name.
	 */
	public function testAddingRoutesWithTheSameNameException()
	{
		$destination = $this->getMock("\Feathers\Router\DestinationInterface");

		$route1 = new \Feathers\Router\Route('pattern1', $destination);
		$route1->setName('route');

		$route2 = new \Feathers\Router\Route('pattern1', $destination);
		$route2->setName('route');

		try {
			$this->collection->add($route1);
			$this->collection->add($route2);
		} catch (InvalidParameterException $e) {
			throw $e;
		}

		$this->fail('An expected exception has not been raised.');		
	}


}
