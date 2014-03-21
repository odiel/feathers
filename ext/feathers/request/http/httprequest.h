
extern zend_class_entry *feathers_request_http_httprequest_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_Http_HttpRequest);

PHP_METHOD(Feathers_Request_Http_HttpRequest, __construct);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getServer);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getQuery);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getPost);
PHP_METHOD(Feathers_Request_Http_HttpRequest, has);
PHP_METHOD(Feathers_Request_Http_HttpRequest, hasQuery);
PHP_METHOD(Feathers_Request_Http_HttpRequest, hasPost);
PHP_METHOD(Feathers_Request_Http_HttpRequest, hasServer);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getHeader);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getScheme);
PHP_METHOD(Feathers_Request_Http_HttpRequest, isAjax);
PHP_METHOD(Feathers_Request_Http_HttpRequest, isSoap);
PHP_METHOD(Feathers_Request_Http_HttpRequest, isSecure);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getRawBody);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getJsonRawBody);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getServerAddress);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getServerName);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getHttpHost);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getClientAddress);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getUserAgent);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getMethod);
PHP_METHOD(Feathers_Request_Http_HttpRequest, isMethod);
PHP_METHOD(Feathers_Request_Http_HttpRequest, isPost);
PHP_METHOD(Feathers_Request_Http_HttpRequest, isGet);
PHP_METHOD(Feathers_Request_Http_HttpRequest, isPut);
PHP_METHOD(Feathers_Request_Http_HttpRequest, isPatch);
PHP_METHOD(Feathers_Request_Http_HttpRequest, isHead);
PHP_METHOD(Feathers_Request_Http_HttpRequest, isDelete);
PHP_METHOD(Feathers_Request_Http_HttpRequest, isOptions);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getHeaders);
PHP_METHOD(Feathers_Request_Http_HttpRequest, hasFiles);
PHP_METHOD(Feathers_Request_Http_HttpRequest, getUploadedFiles);
PHP_METHOD(Feathers_Request_Http_HttpRequest, _hasFileHelper);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_getserver, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_getquery, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_getpost, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_has, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_hasquery, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_haspost, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_hasserver, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_getheader, 0, 0, 1)
	ZEND_ARG_INFO(0, header)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_getclientaddress, 0, 0, 0)
	ZEND_ARG_INFO(0, trustForwardedHeader)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_ismethod, 0, 0, 1)
	ZEND_ARG_INFO(0, methods)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_hasfiles, 0, 0, 0)
	ZEND_ARG_INFO(0, onlySuccessful)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest_getuploadedfiles, 0, 0, 0)
	ZEND_ARG_INFO(0, onlySuccessful)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequest__hasfilehelper, 0, 0, 2)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_INFO(0, onlySuccessful)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_request_http_httprequest_method_entry) {
	PHP_ME(Feathers_Request_Http_HttpRequest, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Request_Http_HttpRequest, getServer, arginfo_feathers_request_http_httprequest_getserver, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getQuery, arginfo_feathers_request_http_httprequest_getquery, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getPost, arginfo_feathers_request_http_httprequest_getpost, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, has, arginfo_feathers_request_http_httprequest_has, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, hasQuery, arginfo_feathers_request_http_httprequest_hasquery, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, hasPost, arginfo_feathers_request_http_httprequest_haspost, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, hasServer, arginfo_feathers_request_http_httprequest_hasserver, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getHeader, arginfo_feathers_request_http_httprequest_getheader, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getScheme, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, isAjax, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, isSoap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, isSecure, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getRawBody, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getJsonRawBody, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getServerAddress, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getServerName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getHttpHost, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getClientAddress, arginfo_feathers_request_http_httprequest_getclientaddress, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getUserAgent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getMethod, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, isMethod, arginfo_feathers_request_http_httprequest_ismethod, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, isPost, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, isGet, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, isPut, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, isPatch, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, isHead, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, isDelete, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, isOptions, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getHeaders, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, hasFiles, arginfo_feathers_request_http_httprequest_hasfiles, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, getUploadedFiles, arginfo_feathers_request_http_httprequest_getuploadedfiles, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Request_Http_HttpRequest, _hasFileHelper, arginfo_feathers_request_http_httprequest__hasfilehelper, ZEND_ACC_PRIVATE)
  PHP_FE_END
};
