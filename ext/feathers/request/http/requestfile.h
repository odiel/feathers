
extern zend_class_entry *feathers_request_http_requestfile_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_Http_RequestFile);

PHP_METHOD(Feathers_Request_Http_RequestFile, copyTo);
PHP_METHOD(Feathers_Request_Http_RequestFile, moveTo);
PHP_METHOD(Feathers_Request_Http_RequestFile, rename);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestfile_copyto, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestfile_moveto, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestfile_rename, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_request_http_requestfile_method_entry) {
	PHP_ME(Feathers_Request_Http_RequestFile, copyTo, arginfo_feathers_request_http_requestfile_copyto, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_RequestFile, moveTo, arginfo_feathers_request_http_requestfile_moveto, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_RequestFile, rename, arginfo_feathers_request_http_requestfile_rename, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
