
extern zend_class_entry *feathers_request_http_requestinterface_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_Http_RequestInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestinterface_getserver, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestinterface_getquery, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestinterface_getpost, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
	ZEND_ARG_INFO(0, defaultValue)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestinterface_has, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestinterface_hasquery, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestinterface_haspost, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestinterface_hasserver, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestinterface_getheader, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestinterface_getclientaddress, 0, 0, 0)
	ZEND_ARG_INFO(0, trustForwardedHeader)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestinterface_hasfiles, 0, 0, 0)
	ZEND_ARG_INFO(0, onlySuccessful)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_request_http_requestinterface_getuploadedfiles, 0, 0, 0)
	ZEND_ARG_INFO(0, onlySuccessful)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_request_http_requestinterface_method_entry) {
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getServer, arginfo_feathers_request_http_requestinterface_getserver)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getQuery, arginfo_feathers_request_http_requestinterface_getquery)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getPost, arginfo_feathers_request_http_requestinterface_getpost)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, has, arginfo_feathers_request_http_requestinterface_has)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, hasQuery, arginfo_feathers_request_http_requestinterface_hasquery)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, hasPost, arginfo_feathers_request_http_requestinterface_haspost)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, hasServer, arginfo_feathers_request_http_requestinterface_hasserver)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getHeader, arginfo_feathers_request_http_requestinterface_getheader)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getScheme, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, isAjax, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, isSoap, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, isSecure, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getRawBody, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getJsonRawBody, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getServerAddress, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getServerName, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getHttpHost, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getClientAddress, arginfo_feathers_request_http_requestinterface_getclientaddress)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getMethod, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getUserAgent, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, isMethod, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, isPost, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, isGet, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, isPut, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, isPatch, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, isHead, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, isDelete, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, isOptions, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getHeaders, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, hasFiles, arginfo_feathers_request_http_requestinterface_hasfiles)
	PHP_ABSTRACT_ME(Feathers_Request_Http_RequestInterface, getUploadedFiles, arginfo_feathers_request_http_requestinterface_getuploadedfiles)
  PHP_FE_END
};
