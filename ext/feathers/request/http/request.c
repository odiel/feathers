
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/array.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/memory.h"
#include "kernel/concat.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"
#include "kernel/string.h"
#include "kernel/object.h"
#include "kernel/file.h"
#include "kernel/hash.h"


ZEPHIR_INIT_CLASS(Feathers_Request_Http_Request) {

	ZEPHIR_REGISTER_CLASS_EX(Feathers\\Request\\Http, Request, feathers, request_http_request, feathers_request_requestabstract_ce, feathers_request_http_request_method_entry, 0);

	zend_declare_property_null(feathers_request_http_request_ce, SL("_rawBody"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_class_implements(feathers_request_http_request_ce TSRMLS_CC, 1, feathers_request_http_requestinterface_ce);
	return SUCCESS;

}

PHP_METHOD(Feathers_Request_Http_Request, __construct) {



}

PHP_METHOD(Feathers_Request_Http_Request, getServer) {

	zval *name_param = NULL, *value, *_SERVER;
	zval *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name_param);

	if (Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(name_param) == IS_STRING) {
		name = name_param;
	} else {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	}


	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	if (zephir_array_isset_fetch(&value, _SERVER, name, 1 TSRMLS_CC)) {
		RETURN_CTOR(value);
	}
	RETURN_MM_STRING("", 1);

}

PHP_METHOD(Feathers_Request_Http_Request, getQuery) {

	zval *name_param = NULL, *defaultValue = NULL, *value, *_GET;
	zval *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &name_param, &defaultValue);

	if (Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(name_param) == IS_STRING) {
		name = name_param;
	} else {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	}
	if (!defaultValue) {
		defaultValue = ZEPHIR_GLOBAL(global_null);
	}


	zephir_get_global(&_GET, SS("_GET") TSRMLS_CC);
	if (zephir_array_isset_fetch(&value, _GET, name, 1 TSRMLS_CC)) {
		RETURN_CTOR(value);
	}
	RETURN_CCTOR(defaultValue);

}

PHP_METHOD(Feathers_Request_Http_Request, getPost) {

	zval *name_param = NULL, *defaultValue = NULL, *value, *_POST;
	zval *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &name_param, &defaultValue);

	if (Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(name_param) == IS_STRING) {
		name = name_param;
	} else {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	}
	if (!defaultValue) {
		defaultValue = ZEPHIR_GLOBAL(global_null);
	}


	zephir_get_global(&_POST, SS("_POST") TSRMLS_CC);
	if (zephir_array_isset_fetch(&value, _POST, name, 1 TSRMLS_CC)) {
		RETURN_CTOR(value);
	}
	RETURN_CCTOR(defaultValue);

}

PHP_METHOD(Feathers_Request_Http_Request, has) {

	zval *name_param = NULL, *_REQUEST;
	zval *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name_param);

	if (Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(name_param) == IS_STRING) {
		name = name_param;
	} else {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	}


	zephir_get_global(&_REQUEST, SS("_REQUEST") TSRMLS_CC);
	RETURN_MM_BOOL(zephir_array_isset(_REQUEST, name));

}

PHP_METHOD(Feathers_Request_Http_Request, hasQuery) {

	zval *name_param = NULL, *_GET;
	zval *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name_param);

	if (Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(name_param) == IS_STRING) {
		name = name_param;
	} else {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	}


	zephir_get_global(&_GET, SS("_GET") TSRMLS_CC);
	RETURN_MM_BOOL(zephir_array_isset(_GET, name));

}

PHP_METHOD(Feathers_Request_Http_Request, hasPost) {

	zval *name_param = NULL, *_POST;
	zval *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name_param);

	if (Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(name_param) == IS_STRING) {
		name = name_param;
	} else {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	}


	zephir_get_global(&_POST, SS("_POST") TSRMLS_CC);
	RETURN_MM_BOOL(zephir_array_isset(_POST, name));

}

PHP_METHOD(Feathers_Request_Http_Request, hasServer) {

	zval *name_param = NULL, *_SERVER;
	zval *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name_param);

	if (Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(name_param) == IS_STRING) {
		name = name_param;
	} else {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	}


	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	RETURN_MM_BOOL(zephir_array_isset(_SERVER, name));

}

PHP_METHOD(Feathers_Request_Http_Request, getHeader) {

	zval *header_param = NULL, *serverValue, *headerValue, *_SERVER;
	zval *header = NULL, *_0;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &header_param);

	if (Z_TYPE_P(header_param) != IS_STRING && Z_TYPE_P(header_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'header' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(header_param) == IS_STRING) {
		header = header_param;
	} else {
		ZEPHIR_INIT_VAR(header);
		ZVAL_EMPTY_STRING(header);
	}


	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	if (zephir_array_isset_fetch(&serverValue, _SERVER, header, 1 TSRMLS_CC)) {
		RETURN_CTOR(serverValue);
	} else {
		ZEPHIR_INIT_VAR(_0);
		ZEPHIR_CONCAT_SV(_0, "HTTP_", header);
		if (zephir_array_isset_fetch(&headerValue, _SERVER, _0, 1 TSRMLS_CC)) {
			RETURN_CTOR(headerValue);
		}
	}
	RETURN_MM_STRING("", 1);

}

PHP_METHOD(Feathers_Request_Http_Request, getScheme) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *https = NULL, *scheme = NULL, *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "HTTPS", 0);
	ZEPHIR_CALL_METHOD(&https, this_ptr, "getserver", NULL, _0);
	zephir_check_temp_parameter(_0);
	zephir_check_call_status();
	if (zephir_is_true(https)) {
		ZEPHIR_INIT_VAR(scheme);
		if (ZEPHIR_IS_STRING(https, "off")) {
			ZVAL_STRING(scheme, "http", 1);
		} else {
			ZVAL_STRING(scheme, "https", 1);
		}
	} else {
		ZEPHIR_INIT_NVAR(scheme);
		ZVAL_STRING(scheme, "http", 1);
	}
	RETURN_CCTOR(scheme);

}

PHP_METHOD(Feathers_Request_Http_Request, isAjax) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_0 = NULL, *_1;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "HTTP_X_REQUESTED_WITH", 0);
	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getheader", NULL, _1);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING(_0, "XMLHttpRequest"));

}

PHP_METHOD(Feathers_Request_Http_Request, isSoap) {

	zval *server = NULL, *contentType, *_SERVER;

	ZEPHIR_MM_GROW();

	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	ZEPHIR_CPY_WRT(server, _SERVER);
	if (zephir_array_isset_string(server, SS("HTTP_SOAPACTION"))) {
		RETURN_MM_BOOL(1);
	} else {
		ZEPHIR_OBS_VAR(contentType);
		if (zephir_array_isset_string_fetch(&contentType, server, SS("CONTENT_TYPE"), 0 TSRMLS_CC)) {
			RETURN_MM_BOOL(zephir_memnstr_str(contentType, SL("application/soap+xml"), "feathers/request/http/Request.zep", 113));
		}
	}
	RETURN_MM_BOOL(0);

}

PHP_METHOD(Feathers_Request_Http_Request, isSecure) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_0 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getscheme",  NULL);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING(_0, "https"));

}

PHP_METHOD(Feathers_Request_Http_Request, getRawBody) {

	zval *rawBody, *contents, _0;

	ZEPHIR_MM_GROW();

	ZEPHIR_OBS_VAR(rawBody);
	zephir_read_property_this(&rawBody, this_ptr, SL("_rawBody"), PH_NOISY_CC);
	if (ZEPHIR_IS_EMPTY(rawBody)) {
		ZEPHIR_INIT_VAR(contents);
		ZEPHIR_SINIT_VAR(_0);
		ZVAL_STRING(&_0, "php://input", 0);
		zephir_file_get_contents(contents, &_0 TSRMLS_CC);
		zephir_update_property_this(this_ptr, SL("_rawBody"), contents TSRMLS_CC);
		RETURN_CCTOR(contents);
	}
	RETURN_CCTOR(rawBody);

}

PHP_METHOD(Feathers_Request_Http_Request, getJsonRawBody) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *rawBody = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&rawBody, this_ptr, "getrawbody",  NULL);
	zephir_check_call_status();
	if (Z_TYPE_P(rawBody) == IS_STRING) {
		zephir_json_decode(return_value, &(return_value), rawBody, 0  TSRMLS_CC);
		RETURN_MM();
	}
	RETURN_MM_BOOL(0);

}

PHP_METHOD(Feathers_Request_Http_Request, getServerAddress) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_nts_static zephir_fcall_cache_entry *_1 = NULL;
	zval *server = NULL, *serverAddr, *_SERVER, _0;

	ZEPHIR_MM_GROW();

	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	ZEPHIR_CPY_WRT(server, _SERVER);
	ZEPHIR_OBS_VAR(serverAddr);
	if (zephir_array_isset_string_fetch(&serverAddr, server, SS("SERVER_ADDR"), 0 TSRMLS_CC)) {
		RETURN_CCTOR(serverAddr);
	}
	ZEPHIR_SINIT_VAR(_0);
	ZVAL_STRING(&_0, "localhost", 0);
	ZEPHIR_RETURN_CALL_FUNCTION("gethostbyname", &_1, &_0);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Feathers_Request_Http_Request, getServerName) {

	zval *server = NULL, *serverName, *_SERVER;

	ZEPHIR_MM_GROW();

	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	ZEPHIR_CPY_WRT(server, _SERVER);
	if (zephir_array_isset_string_fetch(&serverName, server, SS("SERVER_NAME"), 1 TSRMLS_CC)) {
		RETURN_CTOR(serverName);
	}
	RETURN_MM_STRING("localhost", 1);

}

PHP_METHOD(Feathers_Request_Http_Request, getHttpHost) {

	zend_bool _1, _2;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *httpHost = NULL, *scheme = NULL, *name = NULL, *port = NULL, *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "HTTP_HOST", 0);
	ZEPHIR_CALL_METHOD(&httpHost, this_ptr, "getserver", NULL, _0);
	zephir_check_temp_parameter(_0);
	zephir_check_call_status();
	if (zephir_is_true(httpHost)) {
		RETURN_CCTOR(httpHost);
	}
	ZEPHIR_CALL_METHOD(&scheme, this_ptr, "getscheme",  NULL);
	zephir_check_call_status();
	ZEPHIR_INIT_BNVAR(_0);
	ZVAL_STRING(_0, "SERVER_NAME", 0);
	ZEPHIR_CALL_METHOD(&name, this_ptr, "getserver", NULL, _0);
	zephir_check_temp_parameter(_0);
	zephir_check_call_status();
	ZEPHIR_INIT_BNVAR(_0);
	ZVAL_STRING(_0, "SERVER_PORT", 0);
	ZEPHIR_CALL_METHOD(&port, this_ptr, "getserver", NULL, _0);
	zephir_check_temp_parameter(_0);
	zephir_check_call_status();
	_1 = ZEPHIR_IS_STRING(scheme, "http");
	if (_1) {
		_1 = ZEPHIR_IS_LONG(port, 80);
	}
	if (_1) {
		RETURN_CCTOR(name);
	}
	_2 = ZEPHIR_IS_STRING(scheme, "https");
	if (_2) {
		_2 = ZEPHIR_IS_LONG(port, 443);
	}
	if (_2) {
		RETURN_CCTOR(name);
	}
	ZEPHIR_CONCAT_VSV(return_value, name, ":", port);
	RETURN_MM();

}

PHP_METHOD(Feathers_Request_Http_Request, getClientAddress) {

	zval *trustForwardedHeader_param = NULL, *address = NULL, *_SERVER, *_0, *_1;
	zend_bool trustForwardedHeader;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &trustForwardedHeader_param);

	if (!trustForwardedHeader_param) {
		trustForwardedHeader = 0;
	} else {
		trustForwardedHeader = zephir_get_boolval(trustForwardedHeader_param);
	}


	ZEPHIR_INIT_VAR(address);
	ZVAL_NULL(address);
	if (trustForwardedHeader) {
		ZEPHIR_OBS_NVAR(address);
		zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	}
	if (Z_TYPE_P(address) == IS_NULL) {
		ZEPHIR_OBS_NVAR(address);
	}
	if (Z_TYPE_P(address) == IS_STRING) {
		if (zephir_memnstr_str(address, SL(","), "feathers/request/http/Request.zep", 242)) {
			ZEPHIR_INIT_VAR(_0);
			zephir_fast_explode_str(_0, SL(","), address, LONG_MAX TSRMLS_CC);
			zephir_array_fetch_long(&_1, _0, 0, PH_NOISY | PH_READONLY TSRMLS_CC);
			RETURN_CTOR(_1);
		}
		RETURN_CCTOR(address);
	}
	RETURN_MM_BOOL(0);

}

PHP_METHOD(Feathers_Request_Http_Request, getUserAgent) {

	zval *userAgent, *_SERVER;


	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	if (zephir_array_isset_string_fetch(&userAgent, _SERVER, SS("HTTP_USER_AGENT"), 1 TSRMLS_CC)) {
		RETURN_CTORW(userAgent);
	}
	RETURN_STRING("", 1);

}

PHP_METHOD(Feathers_Request_Http_Request, getMethod) {

	zval *requestMethod, *_SERVER;


	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	if (zephir_array_isset_string_fetch(&requestMethod, _SERVER, SS("REQUEST_METHOD"), 1 TSRMLS_CC)) {
		RETURN_CTORW(requestMethod);
	}
	RETURN_STRING("", 1);

}

PHP_METHOD(Feathers_Request_Http_Request, isMethod) {

	HashTable *_1;
	HashPosition _0;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *methods, *httpMethod = NULL, *method = NULL, **_2;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &methods);



	ZEPHIR_CALL_METHOD(&httpMethod, this_ptr, "getmethod",  NULL);
	zephir_check_call_status();
	if (Z_TYPE_P(methods) == IS_STRING) {
		RETURN_MM_BOOL(ZEPHIR_IS_EQUAL(methods, httpMethod));
	} else {
		if (Z_TYPE_P(methods) == IS_ARRAY) {
			zephir_is_iterable(methods, &_1, &_0, 0, 0);
			for (
			  ; zephir_hash_get_current_data_ex(_1, (void**) &_2, &_0) == SUCCESS
			  ; zephir_hash_move_forward_ex(_1, &_0)
			) {
				ZEPHIR_GET_HVALUE(method, _2);
				if (ZEPHIR_IS_EQUAL(method, httpMethod)) {
					RETURN_MM_BOOL(1);
				}
			}
		}
	}
	RETURN_MM_BOOL(0);

}

/**
 * Checks whether HTTP method is POST. if _SERVER["REQUEST_METHOD"]=="POST"
 *
 * @return boolean
 */
PHP_METHOD(Feathers_Request_Http_Request, isPost) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_0 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getmethod",  NULL);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING(_0, "POST"));

}

/**
 *
 * Checks whether HTTP method is GET. if _SERVER["REQUEST_METHOD"]=="GET"
 *
 * @return boolean
 */
PHP_METHOD(Feathers_Request_Http_Request, isGet) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_0 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getmethod",  NULL);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING(_0, "GET"));

}

/**
 * Checks whether HTTP method is PUT. if _SERVER["REQUEST_METHOD"]=="PUT"
 *
 * @return boolean
 */
PHP_METHOD(Feathers_Request_Http_Request, isPut) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_0 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getmethod",  NULL);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING(_0, "PUT"));

}

/**
 * Checks whether HTTP method is PATCH. if _SERVER["REQUEST_METHOD"]=="PATCH"
 *
 * @return boolean
 */
PHP_METHOD(Feathers_Request_Http_Request, isPatch) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_0 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getmethod",  NULL);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING(_0, "PATCH"));

}

/**
 * Checks whether HTTP method is HEAD. if _SERVER["REQUEST_METHOD"]=="HEAD"
 *
 * @return boolean
 */
PHP_METHOD(Feathers_Request_Http_Request, isHead) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_0 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getmethod",  NULL);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING(_0, "HEAD"));

}

/**
 * Checks whether HTTP method is DELETE. if _SERVER["REQUEST_METHOD"]=="DELETE"
 *
 * @return boolean
 */
PHP_METHOD(Feathers_Request_Http_Request, isDelete) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_0 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getmethod",  NULL);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING(_0, "DELETE"));

}

/**
 * Checks whether HTTP method is OPTIONS. if _SERVER["REQUEST_METHOD"]=="OPTIONS"
 *
 * @return boolean
 */
PHP_METHOD(Feathers_Request_Http_Request, isOptions) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_0 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_CALL_METHOD(&_0, this_ptr, "getmethod",  NULL);
	zephir_check_call_status();
	RETURN_MM_BOOL(ZEPHIR_IS_STRING(_0, "OPTIONS"));

}

/**
 * Returns the available headers in the request
 *
 * @return array
 */
PHP_METHOD(Feathers_Request_Http_Request, getHeaders) {

	zephir_fcall_cache_entry *_6 = NULL, *_7 = NULL;
	HashTable *_1;
	HashPosition _0;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *headers, *key = NULL, *value = NULL, *_SERVER, **_2, *header = NULL, *_3 = NULL, _4 = zval_used_for_init, _5 = zval_used_for_init;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(headers);
	object_init_ex(headers, feathers_request_headerscollection_ce);
	ZEPHIR_CALL_METHOD(NULL, headers, "__construct", NULL);
	zephir_check_call_status();
	zephir_get_global(&_SERVER, SS("_SERVER") TSRMLS_CC);
	zephir_is_iterable(_SERVER, &_1, &_0, 0, 0);
	for (
	  ; zephir_hash_get_current_data_ex(_1, (void**) &_2, &_0) == SUCCESS
	  ; zephir_hash_move_forward_ex(_1, &_0)
	) {
		ZEPHIR_GET_HMKEY(key, _1, _0);
		ZEPHIR_GET_HVALUE(value, _2);
		if (zephir_start_with_str(key, SL("HTTP_"))) {
			ZEPHIR_INIT_NVAR(header);
			object_init_ex(header, feathers_request_header_ce);
			ZEPHIR_INIT_NVAR(_3);
			ZEPHIR_SINIT_NVAR(_4);
			ZVAL_STRING(&_4, "HTTP_", 0);
			ZEPHIR_SINIT_NVAR(_5);
			ZVAL_STRING(&_5, "", 0);
			zephir_fast_str_replace(_3, &_4, &_5, key);
			ZEPHIR_CALL_METHOD(NULL, header, "__construct", &_6, _3, value);
			zephir_check_call_status();
			ZEPHIR_CALL_METHOD(NULL, headers, "add", &_7, header);
			zephir_check_call_status();
		}
	}
	RETURN_CCTOR(headers);

}

/**
 * Checks whether request include attached files
 *
 * @return boolean
 */
PHP_METHOD(Feathers_Request_Http_Request, hasFiles) {

	zephir_nts_static zephir_fcall_cache_entry *_5 = NULL;
	HashTable *_1;
	HashPosition _0;
	int numberFiles = 0, ZEPHIR_LAST_CALL_STATUS;
	zval *onlySuccessful_param = NULL, *files = NULL, *file = NULL, *error = NULL, *_FILES, **_2, *_4 = NULL;
	zend_bool onlySuccessful, _3;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &onlySuccessful_param);

	if (!onlySuccessful_param) {
		onlySuccessful = 0;
	} else {
		onlySuccessful = zephir_get_boolval(onlySuccessful_param);
	}


	zephir_get_global(&_FILES, SS("_FILES") TSRMLS_CC);
	ZEPHIR_CPY_WRT(files, _FILES);
	if (Z_TYPE_P(files) != IS_ARRAY) {
		RETURN_MM_LONG(0);
	}
	zephir_is_iterable(files, &_1, &_0, 0, 0);
	for (
	  ; zephir_hash_get_current_data_ex(_1, (void**) &_2, &_0) == SUCCESS
	  ; zephir_hash_move_forward_ex(_1, &_0)
	) {
		ZEPHIR_GET_HVALUE(file, _2);
		ZEPHIR_OBS_NVAR(error);
		if (zephir_array_isset_string_fetch(&error, file, SS("error"), 0 TSRMLS_CC)) {
			if (Z_TYPE_P(error) != IS_ARRAY) {
				_3 = !zephir_is_true(error);
				if (!(_3)) {
					_3 = !onlySuccessful;
				}
				if (_3) {
					numberFiles++;
				}
			}
			if (Z_TYPE_P(error) == IS_ARRAY) {
				ZEPHIR_CALL_METHOD(&_4, this_ptr, "_hasfilehelper", &_5, error, (onlySuccessful ? ZEPHIR_GLOBAL(global_true) : ZEPHIR_GLOBAL(global_false)));
				zephir_check_call_status();
				numberFiles += zephir_get_numberval(_4);
			}
		}
	}
	RETURN_MM_LONG(numberFiles);

}

PHP_METHOD(Feathers_Request_Http_Request, getUploadedFiles) {

	zephir_fcall_cache_entry *_7 = NULL;
	zend_class_entry *_6;
	HashTable *_2;
	HashPosition _1;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *onlySuccessful_param = NULL, *filesCollection, *superFiles = NULL, *file = NULL, *error = NULL, *name, *type, *tmpName, *size, *prefix = NULL, *_FILES, **_3, *_5 = NULL;
	zend_bool onlySuccessful, _0, _4, _8, _9, _10;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &onlySuccessful_param);

	if (!onlySuccessful_param) {
		onlySuccessful = 0;
	} else {
		onlySuccessful = zephir_get_boolval(onlySuccessful_param);
	}


	ZEPHIR_INIT_VAR(filesCollection);
	object_init_ex(filesCollection, feathers_request_filescollection_ce);
	ZEPHIR_CALL_METHOD(NULL, filesCollection, "__construct", NULL);
	zephir_check_call_status();
	zephir_get_global(&_FILES, SS("_FILES") TSRMLS_CC);
	ZEPHIR_CPY_WRT(superFiles, _FILES);
	_0 = Z_TYPE_P(superFiles) != IS_ARRAY;
	if (!(_0)) {
		_0 = !zephir_fast_count_int(superFiles TSRMLS_CC);
	}
	if (_0) {
		RETURN_CCTOR(filesCollection);
	}
	zephir_is_iterable(superFiles, &_2, &_1, 0, 0);
	for (
	  ; zephir_hash_get_current_data_ex(_2, (void**) &_3, &_1) == SUCCESS
	  ; zephir_hash_move_forward_ex(_2, &_1)
	) {
		ZEPHIR_GET_HVALUE(file, _3);
		ZEPHIR_OBS_NVAR(error);
		if (zephir_array_isset_string_fetch(&error, file, SS("error"), 0 TSRMLS_CC)) {
			if (Z_TYPE_P(error) != IS_ARRAY) {
				_4 = !zephir_is_true(error);
				if (!(_4)) {
					_4 = !onlySuccessful;
				}
				if (_4) {
					ZEPHIR_INIT_LNVAR(_5);
					_6 = zend_fetch_class(SL("Feathers\\Request\\HttpRequestFile"), ZEND_FETCH_CLASS_AUTO TSRMLS_CC);
					object_init_ex(_5, _6);
					if (zephir_has_constructor(_5 TSRMLS_CC)) {
						ZEPHIR_CALL_METHOD(NULL, _5, "__construct", NULL, file);
						zephir_check_call_status();
					}
					ZEPHIR_CALL_METHOD(NULL, filesCollection, "add", &_7, _5);
					zephir_check_call_status();
				}
			}
			_4 = Z_TYPE_P(error) == IS_ARRAY;
			if (_4) {
				_4 = zephir_array_isset_string_fetch(&name, file, SS("name"), 1 TSRMLS_CC);
			}
			_8 = _4;
			if (_8) {
				_8 = zephir_array_isset_string_fetch(&type, file, SS("type"), 1 TSRMLS_CC);
			}
			_9 = _8;
			if (_9) {
				_9 = zephir_array_isset_string_fetch(&tmpName, file, SS("tmpName"), 1 TSRMLS_CC);
			}
			_10 = _9;
			if (_10) {
				_10 = zephir_array_isset_string_fetch(&size, file, SS("size"), 1 TSRMLS_CC);
			}
			if (_10) {
				ZEPHIR_INIT_NVAR(prefix);
				ZVAL_STRING(prefix, "fix-me", 1);
			}
		}
	}
	RETURN_CCTOR(filesCollection);

}

PHP_METHOD(Feathers_Request_Http_Request, _hasFileHelper) {

	zephir_nts_static zephir_fcall_cache_entry *_5 = NULL;
	HashTable *_1;
	HashPosition _0;
	int numberFiles = 0, ZEPHIR_LAST_CALL_STATUS;
	zend_bool onlySuccessful, _3;
	zval *data, *onlySuccessful_param = NULL, *value = NULL, **_2, *_4 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &data, &onlySuccessful_param);

	onlySuccessful = zephir_get_boolval(onlySuccessful_param);


	if (Z_TYPE_P(data) != IS_ARRAY) {
		RETURN_MM_LONG(1);
	}
	zephir_is_iterable(data, &_1, &_0, 0, 0);
	for (
	  ; zephir_hash_get_current_data_ex(_1, (void**) &_2, &_0) == SUCCESS
	  ; zephir_hash_move_forward_ex(_1, &_0)
	) {
		ZEPHIR_GET_HVALUE(value, _2);
		if (Z_TYPE_P(value) != IS_ARRAY) {
			_3 = !zephir_is_true(value);
			if (!(_3)) {
				_3 = !onlySuccessful;
			}
			if (_3) {
				numberFiles++;
			}
		}
		if (Z_TYPE_P(value) == IS_ARRAY) {
			ZEPHIR_CALL_METHOD(&_4, this_ptr, "_hasfilehelper", &_5, value, (onlySuccessful ? ZEPHIR_GLOBAL(global_true) : ZEPHIR_GLOBAL(global_false)));
			zephir_check_call_status();
			numberFiles += zephir_get_numberval(_4);
		}
	}
	RETURN_MM_LONG(numberFiles);

}

