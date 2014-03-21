
extern zend_class_entry *feathers_router_routecollection_ce;

ZEPHIR_INIT_CLASS(Feathers_Router_RouteCollection);

PHP_METHOD(Feathers_Router_RouteCollection, __construct);
PHP_METHOD(Feathers_Router_RouteCollection, getIterator);
PHP_METHOD(Feathers_Router_RouteCollection, count);
PHP_METHOD(Feathers_Router_RouteCollection, add);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routecollection_add, 0, 0, 1)
	ZEND_ARG_INFO(0, route)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_router_routecollection_method_entry) {
	PHP_ME(Feathers_Router_RouteCollection, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Router_RouteCollection, getIterator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_RouteCollection, count, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_RouteCollection, add, arginfo_feathers_router_routecollection_add, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
