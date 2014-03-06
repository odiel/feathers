<?php 

namespace Tests\Feathers\Router;

class MethodsCollectionTest extends \PHPUnit_Framework_TestCase
{

	private $collection;

	protected function setUp()
	{
		$this->collection = new \Feathers\Router\MethodsCollection();
	}

	public function testMethodsListIsInitializedOnceTheObjectIsConstructed()
	{
		$expected = new \ArrayIterator(array());

		$this->assertEquals($expected, $this->collection->getIterator());
	}

	public function testCountingTheAddedMethods()
	{
		$this->collection->add('GET');
		$this->collection->add('POST');

		$expected = 2;

		$this->assertEquals($expected, $this->collection->count());
	}

	public function testAddingMethods()
	{
		$this->collection->add('GET');
		$this->collection->add('PUT');
		$this->collection->add('PUT');
		$this->collection->add('POST');

		$expected = new \ArrayIterator(array('GET' => 'GET', 'POST' => 'POST', 'PUT' => 'PUT'));

		$this->assertEquals($expected, $this->collection->getIterator());
	}
}
