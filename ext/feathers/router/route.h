
extern zend_class_entry *feathers_router_route_ce;

ZEPHIR_INIT_CLASS(Feathers_Router_Route);

PHP_METHOD(Feathers_Router_Route, __construct);
PHP_METHOD(Feathers_Router_Route, handle);
PHP_METHOD(Feathers_Router_Route, getDestination);
PHP_METHOD(Feathers_Router_Route, getPattern);
PHP_METHOD(Feathers_Router_Route, getCompiledPattern);
PHP_METHOD(Feathers_Router_Route, setMethods);
PHP_METHOD(Feathers_Router_Route, getMethods);
PHP_METHOD(Feathers_Router_Route, setName);
PHP_METHOD(Feathers_Router_Route, getName);
PHP_METHOD(Feathers_Router_Route, reConfigure);
PHP_METHOD(Feathers_Router_Route, extractNamedParams);
PHP_METHOD(Feathers_Router_Route, compilePattern);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_route___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, destination)
	ZEND_ARG_INFO(0, methods)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_route_setmethods, 0, 0, 1)
	ZEND_ARG_INFO(0, methods)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_route_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_route_reconfigure, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, paths)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_route_extractnamedparams, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_route_compilepattern, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_router_route_method_entry) {
	PHP_ME(Feathers_Router_Route, __construct, arginfo_feathers_router_route___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Router_Route, handle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Route, getDestination, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Route, getPattern, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Route, getCompiledPattern, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Route, setMethods, arginfo_feathers_router_route_setmethods, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Route, getMethods, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Route, setName, arginfo_feathers_router_route_setname, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Route, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Route, reConfigure, arginfo_feathers_router_route_reconfigure, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Route, extractNamedParams, arginfo_feathers_router_route_extractnamedparams, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Route, compilePattern, arginfo_feathers_router_route_compilepattern, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
