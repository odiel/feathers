
extern zend_class_entry *feathers_request_http_httprequestinterface_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_Http_HttpRequestInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequestinterface_getserver, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequestinterface_getquery, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequestinterface_getpost, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequestinterface_has, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequestinterface_hasquery, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequestinterface_haspost, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequestinterface_hasserver, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequestinterface_getheader, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequestinterface_getclientaddress, 0, 0, 0)
	ZEND_ARG_INFO(0, trustForwardedHeader)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequestinterface_hasfiles, 0, 0, 0)
	ZEND_ARG_INFO(0, onlySuccessful)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_httprequestinterface_getuploadedfiles, 0, 0, 0)
	ZEND_ARG_INFO(0, onlySuccessful)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_request_http_httprequestinterface_method_entry) {
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getServer, arginfo_feathers_request_http_httprequestinterface_getserver)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getQuery, arginfo_feathers_request_http_httprequestinterface_getquery)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getPost, arginfo_feathers_request_http_httprequestinterface_getpost)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, has, arginfo_feathers_request_http_httprequestinterface_has)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, hasQuery, arginfo_feathers_request_http_httprequestinterface_hasquery)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, hasPost, arginfo_feathers_request_http_httprequestinterface_haspost)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, hasServer, arginfo_feathers_request_http_httprequestinterface_hasserver)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getHeader, arginfo_feathers_request_http_httprequestinterface_getheader)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getScheme, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, isAjax, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, isSoap, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, isSecure, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getRawBody, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getJsonRawBody, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getServerAddress, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getServerName, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getHttpHost, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getClientAddress, arginfo_feathers_request_http_httprequestinterface_getclientaddress)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getMethod, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getUserAgent, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, isMethod, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, isPost, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, isGet, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, isPut, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, isPatch, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, isHead, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, isDelete, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, isOptions, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getHeaders, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, hasFiles, arginfo_feathers_request_http_httprequestinterface_hasfiles)
	PHP_ABSTRACT_ME(Feathers_Request_Http_HttpRequestInterface, getUploadedFiles, arginfo_feathers_request_http_httprequestinterface_getuploadedfiles)
  PHP_FE_END
};
