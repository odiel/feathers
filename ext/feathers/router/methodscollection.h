
extern zend_class_entry *feathers_router_methodscollection_ce;

ZEPHIR_INIT_CLASS(Feathers_Router_MethodsCollection);

PHP_METHOD(Feathers_Router_MethodsCollection, __construct);
PHP_METHOD(Feathers_Router_MethodsCollection, getIterator);
PHP_METHOD(Feathers_Router_MethodsCollection, count);
PHP_METHOD(Feathers_Router_MethodsCollection, add);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_methodscollection_add, 0, 0, 1)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_router_methodscollection_method_entry) {
	PHP_ME(Feathers_Router_MethodsCollection, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Router_MethodsCollection, getIterator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_MethodsCollection, count, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_MethodsCollection, add, arginfo_feathers_router_methodscollection_add, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
