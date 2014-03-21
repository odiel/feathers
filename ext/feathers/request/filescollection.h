
extern zend_class_entry *feathers_request_filescollection_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_FilesCollection);

PHP_METHOD(Feathers_Request_FilesCollection, __construct);
PHP_METHOD(Feathers_Request_FilesCollection, getIterator);
PHP_METHOD(Feathers_Request_FilesCollection, count);
PHP_METHOD(Feathers_Request_FilesCollection, add);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_filescollection_add, 0, 0, 1)
	ZEND_ARG_INFO(0, file)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_request_filescollection_method_entry) {
	PHP_ME(Feathers_Request_FilesCollection, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Request_FilesCollection, getIterator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_FilesCollection, count, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_FilesCollection, add, arginfo_feathers_request_filescollection_add, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
