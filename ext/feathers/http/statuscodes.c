
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Http_StatusCodes) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Http, StatusCodes, feathers, http_statuscodes, NULL, 0);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("VERSION") TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("SECTION_1XX") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_CONTINUE"), 100 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_CONTINUE_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_SWITCHING_PROTOCOLS"), 101 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_SWITCHING_PROTOCOLS_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_PROCESSING"), 102 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_PROCESSING_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("SECTION_2XX") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_OK"), 200 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_OK_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_CREATED"), 201 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_CREATED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_ACCEPTED"), 202 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_ACCEPTED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_NO_CONTENT"), 204 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_NO_CONTENT_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_RESET_CONTENT"), 205 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_RESET_CONTENT_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_PARTIAL_CONTENT"), 206 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_PARTIAL_CONTENT_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("SECTION_3XX") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_MULTIPLE_CHOICES"), 300 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_MULTIPLE_CHOICES_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_MOVED_PERMANENTLY"), 301 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_MOVED_PERMANENTLY_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_FOUND"), 302 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_FOUND_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_NOT_MODIFIED"), 304 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_NOT_MODIFIED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_SWITCH_PROXY"), 306 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_SWITCH_PROXY_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_TEMPORARY_REDIRECT"), 307 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_TEMPORARY_REDIRECT_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_PERMANENT_REDIRECT"), 308 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_PERMANENT_REDIRECT_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("SECTION_4XX") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_BAD_REQUEST"), 400 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_BAD_REQUEST_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_UNAUTHORIZED"), 401 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_UNAUTHORIZED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_PAYMENT_REQUIRED"), 402 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_PAYMENT_REQUIRED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_FORBIDDEN"), 403 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_FORBIDDEN_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_NOT_FOUND"), 404 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_NOT_FOUND_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_METHOD_NOT_ALLOWED"), 405 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_METHOD_NOT_ALLOWED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_NO_ACCEPTABLE"), 406 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_NO_ACCEPTABLE_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_PROXY_AUTHENTICATION_REQUIRED"), 407 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_PROXY_AUTHENTICATION_REQUIRED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_REQUEST_TIMEOUT"), 408 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_REQUEST_TIMEOUT_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_CONFLICT"), 409 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_CONFLICT_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_GONE"), 410 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_GONE_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_LENGTH_REQUIRED"), 411 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_LENGTH_REQUIRED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_PRECONDITION_FAILED"), 412 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_PRECONDITION_FAILED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_REQUEST_ENTITY_TOO_LARGE"), 413 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_REQUEST_ENTITY_TOO_LARGE_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_REQUEST_URI_TOO_LONG"), 414 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_REQUEST_URI_TOO_LONG_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_UNSUPPORTED_MEDIA_TYPE"), 415 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_UNSUPPORTED_MEDIA_TYPE_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_REQUESTED_RANGE_NOT_SATISFIABLE"), 416 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_REQUESTED_RANGE_NOT_SATISFIABLE_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_EXPECTATION_FAILED"), 417 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_EXPECTATION_FAILED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_I_AM_A_TEAPOT"), 418 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_I_AM_A_TEAPOT_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_AUTHENTICATION_TIMEOUT"), 419 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_AUTHENTICATION_TIMEOUT_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_METHOD_FAILURE"), 420 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_METHOD_FAILURE_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("SECTION_5XX") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_INTERNAL_SERVER_ERROR"), 500 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_INTERNAL_SERVER_ERROR_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_NOT_IMPLEMENTED"), 501 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_NOT_IMPLEMENTED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_BAD_GATEWAY"), 502 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_BAD_GATEWAY_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_SERVICE_UNAVAILABLE"), 503 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_SERVICE_UNAVAILABLE_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_GATEWAY_TIMEOUT"), 504 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_GATEWAY_TIMEOUT_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_VERSION_NOT_SUPPORTED"), 505 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_VERSION_NOT_SUPPORTED_MESSAGE") TSRMLS_CC);

	zend_declare_class_constant_long(feathers_http_statuscodes_ce, SL("HTTP_CONNECTION_TIMED_OUT"), 522 TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_statuscodes_ce, SL("HTTP_CONNECTION_TIMED_OUT_MESSAGE") TSRMLS_CC);

	return SUCCESS;

}

