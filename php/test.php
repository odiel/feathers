<?php

class Destination implements \Feathers\Router\DestinationInterface
{

	public function beforeHandle($request)
	{
		var_dump($request);
	}

	public function handle()
	{
		
	}

	public function afterHandle()
	{

	}
}

$methods = new \Feathers\Router\MethodsCollection();
$methods->add(\Feathers\Http\Methods::POST);
$methods->add(\Feathers\Http\Methods::GET);
$methods->add(\Feathers\Http\Methods::PUT);

$route = new \Feathers\Router\Route('http://', new Destination());
$route->setMethods($methods);
$route->setName('route');

$route->handle();

//var_dump($route->getMethods());

//var_dump($route->getName());

//var_dump($route->getCompiledPattern());

$request = new \Feathers\Request\HttpRequest();

var_dump($request);
