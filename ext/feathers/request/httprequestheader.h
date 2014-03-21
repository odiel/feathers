
extern zend_class_entry *feathers_request_httprequestheader_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_HttpRequestHeader);

PHP_METHOD(Feathers_Request_HttpRequestHeader, __construct);
PHP_METHOD(Feathers_Request_HttpRequestHeader, getName);
PHP_METHOD(Feathers_Request_HttpRequestHeader, getValue);
PHP_METHOD(Feathers_Request_HttpRequestHeader, __toString);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_httprequestheader___construct, 0, 0, 2)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_request_httprequestheader_method_entry) {
	PHP_ME(Feathers_Request_HttpRequestHeader, __construct, arginfo_feathers_request_httprequestheader___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Request_HttpRequestHeader, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_HttpRequestHeader, getValue, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_HttpRequestHeader, __toString, NULL, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
