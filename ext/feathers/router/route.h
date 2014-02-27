
extern zend_class_entry *feathers_router_route_ce;

ZEPHIR_INIT_CLASS(Feathers_Router_Route);

PHP_METHOD(Feathers_Router_Route, __construct);
PHP_METHOD(Feathers_Router_Route, handle);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_route___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, destination)
	ZEND_ARG_INFO(0, httpMethods)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_router_route_method_entry) {
	PHP_ME(Feathers_Router_Route, __construct, arginfo_feathers_router_route___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Router_Route, handle, NULL, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
