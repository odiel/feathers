
extern zend_class_entry *feathers_request_httprequestfile_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_HttpRequestFile);

PHP_METHOD(Feathers_Request_HttpRequestFile, copyTo);
PHP_METHOD(Feathers_Request_HttpRequestFile, moveTo);
PHP_METHOD(Feathers_Request_HttpRequestFile, rename);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_httprequestfile_copyto, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_httprequestfile_moveto, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_httprequestfile_rename, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_request_httprequestfile_method_entry) {
	PHP_ME(Feathers_Request_HttpRequestFile, copyTo, arginfo_feathers_request_httprequestfile_copyto, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_HttpRequestFile, moveTo, arginfo_feathers_request_httprequestfile_moveto, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_HttpRequestFile, rename, arginfo_feathers_request_httprequestfile_rename, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
