
extern zend_class_entry *feathers_router_routescollection_ce;

ZEPHIR_INIT_CLASS(Feathers_Router_RoutesCollection);

PHP_METHOD(Feathers_Router_RoutesCollection, __construct);
PHP_METHOD(Feathers_Router_RoutesCollection, getIterator);
PHP_METHOD(Feathers_Router_RoutesCollection, count);
PHP_METHOD(Feathers_Router_RoutesCollection, add);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routescollection_add, 0, 0, 1)
	ZEND_ARG_INFO(0, route)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_router_routescollection_method_entry) {
	PHP_ME(Feathers_Router_RoutesCollection, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Router_RoutesCollection, getIterator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_RoutesCollection, count, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_RoutesCollection, add, arginfo_feathers_router_routescollection_add, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
