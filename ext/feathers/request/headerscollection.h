
extern zend_class_entry *feathers_request_headerscollection_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_HeadersCollection);

PHP_METHOD(Feathers_Request_HeadersCollection, __construct);
PHP_METHOD(Feathers_Request_HeadersCollection, getIterator);
PHP_METHOD(Feathers_Request_HeadersCollection, count);
PHP_METHOD(Feathers_Request_HeadersCollection, add);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_headerscollection_add, 0, 0, 1)
	ZEND_ARG_INFO(0, header)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_request_headerscollection_method_entry) {
	PHP_ME(Feathers_Request_HeadersCollection, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Request_HeadersCollection, getIterator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_HeadersCollection, count, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_HeadersCollection, add, arginfo_feathers_request_headerscollection_add, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
