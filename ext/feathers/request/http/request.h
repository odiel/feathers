
extern zend_class_entry *feathers_request_http_request_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_Http_Request);

PHP_METHOD(Feathers_Request_Http_Request, __construct);
PHP_METHOD(Feathers_Request_Http_Request, getServer);
PHP_METHOD(Feathers_Request_Http_Request, getQuery);
PHP_METHOD(Feathers_Request_Http_Request, getPost);
PHP_METHOD(Feathers_Request_Http_Request, has);
PHP_METHOD(Feathers_Request_Http_Request, hasQuery);
PHP_METHOD(Feathers_Request_Http_Request, hasPost);
PHP_METHOD(Feathers_Request_Http_Request, hasServer);
PHP_METHOD(Feathers_Request_Http_Request, getHeader);
PHP_METHOD(Feathers_Request_Http_Request, getScheme);
PHP_METHOD(Feathers_Request_Http_Request, isAjax);
PHP_METHOD(Feathers_Request_Http_Request, isSoap);
PHP_METHOD(Feathers_Request_Http_Request, isSecure);
PHP_METHOD(Feathers_Request_Http_Request, getRawBody);
PHP_METHOD(Feathers_Request_Http_Request, getJsonRawBody);
PHP_METHOD(Feathers_Request_Http_Request, getServerAddress);
PHP_METHOD(Feathers_Request_Http_Request, getServerName);
PHP_METHOD(Feathers_Request_Http_Request, getHttpHost);
PHP_METHOD(Feathers_Request_Http_Request, getClientAddress);
PHP_METHOD(Feathers_Request_Http_Request, getUserAgent);
PHP_METHOD(Feathers_Request_Http_Request, getMethod);
PHP_METHOD(Feathers_Request_Http_Request, isMethod);
PHP_METHOD(Feathers_Request_Http_Request, isPost);
PHP_METHOD(Feathers_Request_Http_Request, isGet);
PHP_METHOD(Feathers_Request_Http_Request, isPut);
PHP_METHOD(Feathers_Request_Http_Request, isPatch);
PHP_METHOD(Feathers_Request_Http_Request, isHead);
PHP_METHOD(Feathers_Request_Http_Request, isDelete);
PHP_METHOD(Feathers_Request_Http_Request, isOptions);
PHP_METHOD(Feathers_Request_Http_Request, getHeaders);
PHP_METHOD(Feathers_Request_Http_Request, hasFiles);
PHP_METHOD(Feathers_Request_Http_Request, getUploadedFiles);
PHP_METHOD(Feathers_Request_Http_Request, _hasFileHelper);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_getserver, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_getquery, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_getpost, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_has, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_hasquery, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_haspost, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_hasserver, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_getheader, 0, 0, 1)
	ZEND_ARG_INFO(0, header)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_getclientaddress, 0, 0, 0)
	ZEND_ARG_INFO(0, trustForwardedHeader)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_ismethod, 0, 0, 1)
	ZEND_ARG_INFO(0, methods)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_hasfiles, 0, 0, 0)
	ZEND_ARG_INFO(0, onlySuccessful)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request_getuploadedfiles, 0, 0, 0)
	ZEND_ARG_INFO(0, onlySuccessful)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_request__hasfilehelper, 0, 0, 2)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_INFO(0, onlySuccessful)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_request_http_request_method_entry) {
	PHP_ME(Feathers_Request_Http_Request, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Request_Http_Request, getServer, arginfo_feathers_request_http_request_getserver, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getQuery, arginfo_feathers_request_http_request_getquery, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getPost, arginfo_feathers_request_http_request_getpost, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, has, arginfo_feathers_request_http_request_has, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, hasQuery, arginfo_feathers_request_http_request_hasquery, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, hasPost, arginfo_feathers_request_http_request_haspost, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, hasServer, arginfo_feathers_request_http_request_hasserver, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getHeader, arginfo_feathers_request_http_request_getheader, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getScheme, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, isAjax, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, isSoap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, isSecure, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getRawBody, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getJsonRawBody, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getServerAddress, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getServerName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getHttpHost, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getClientAddress, arginfo_feathers_request_http_request_getclientaddress, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getUserAgent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getMethod, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, isMethod, arginfo_feathers_request_http_request_ismethod, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, isPost, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, isGet, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, isPut, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, isPatch, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, isHead, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, isDelete, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, isOptions, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getHeaders, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, hasFiles, arginfo_feathers_request_http_request_hasfiles, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, getUploadedFiles, arginfo_feathers_request_http_request_getuploadedfiles, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_Request, _hasFileHelper, arginfo_feathers_request_http_request__hasfilehelper, ZEND_ACC_PRIVATE)
  PHP_FE_END
};
