
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Request_HttpRequestInterface) {

	ZEPHIR_REGISTER_INTERFACE(Feathers\\Request, HttpRequestInterface, feathers, request_httprequestinterface, feathers_request_httprequestinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getServer);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getQuery);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getPost);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, has);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, hasQuery);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, hasPost);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, hasServer);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getHeader);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getScheme);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, isAjax);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, isSoap);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, isSecure);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getRawBody);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getJsonRawBody);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getServerAddress);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getServerName);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getHttpHost);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getClientAddress);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getMethod);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getUserAgent);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, isMethod);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, isPost);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, isGet);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, isPut);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, isPatch);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, isHead);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, isDelete);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, isOptions);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getHeaders);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, hasFiles);

ZEPHIR_DOC_METHOD(Feathers_Request_HttpRequestInterface, getUploadedFiles);

