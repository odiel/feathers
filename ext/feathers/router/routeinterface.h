
extern zend_class_entry *feathers_router_routeinterface_ce;

ZEPHIR_INIT_CLASS(Feathers_Router_RouteInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routeinterface___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, destination)
	ZEND_ARG_INFO(0, methods)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routeinterface_setmethods, 0, 0, 1)
	ZEND_ARG_INFO(0, methods)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routeinterface_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_router_routeinterface_method_entry) {
	PHP_ABSTRACT_ME(Feathers_Router_RouteInterface, __construct, arginfo_feathers_router_routeinterface___construct)
	PHP_ABSTRACT_ME(Feathers_Router_RouteInterface, getDestination, NULL)
	PHP_ABSTRACT_ME(Feathers_Router_RouteInterface, getPattern, NULL)
	PHP_ABSTRACT_ME(Feathers_Router_RouteInterface, getCompiledPattern, NULL)
	PHP_ABSTRACT_ME(Feathers_Router_RouteInterface, setMethods, arginfo_feathers_router_routeinterface_setmethods)
	PHP_ABSTRACT_ME(Feathers_Router_RouteInterface, getMethods, NULL)
	PHP_ABSTRACT_ME(Feathers_Router_RouteInterface, setName, arginfo_feathers_router_routeinterface_setname)
	PHP_ABSTRACT_ME(Feathers_Router_RouteInterface, getName, NULL)
  PHP_FE_END
};
