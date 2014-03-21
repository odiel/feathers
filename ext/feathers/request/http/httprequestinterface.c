
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Request_Http_HttpRequestInterface) {

	ZEPHIR_REGISTER_INTERFACE(Feathers\\Request\\Http, HttpRequestInterface, feathers, request_http_httprequestinterface, feathers_request_http_httprequestinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getServer);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getQuery);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getPost);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, has);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, hasQuery);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, hasPost);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, hasServer);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getHeader);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getScheme);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, isAjax);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, isSoap);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, isSecure);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getRawBody);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getJsonRawBody);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getServerAddress);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getServerName);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getHttpHost);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getClientAddress);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getMethod);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getUserAgent);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, isMethod);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, isPost);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, isGet);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, isPut);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, isPatch);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, isHead);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, isDelete);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, isOptions);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getHeaders);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, hasFiles);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_HttpRequestInterface, getUploadedFiles);

