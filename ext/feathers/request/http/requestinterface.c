
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Request_Http_RequestInterface) {

	ZEPHIR_REGISTER_INTERFACE(Feathers\\Request\\Http, RequestInterface, feathers, request_http_requestinterface, feathers_request_http_requestinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getServer);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getQuery);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getPost);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, has);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, hasQuery);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, hasPost);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, hasServer);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getHeader);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getScheme);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, isAjax);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, isSoap);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, isSecure);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getRawBody);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getJsonRawBody);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getServerAddress);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getServerName);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getHttpHost);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getClientAddress);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getMethod);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getUserAgent);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, isMethod);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, isPost);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, isGet);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, isPut);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, isPatch);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, isHead);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, isDelete);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, isOptions);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getHeaders);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, hasFiles);

ZEPHIR_DOC_METHOD(Feathers_Request_Http_RequestInterface, getUploadedFiles);

