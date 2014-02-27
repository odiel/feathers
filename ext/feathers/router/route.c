
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
#include "kernel/object.h"
#include "kernel/exception.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Feathers_Router_Route) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Router, Route, feathers, router_route, feathers_router_route_method_entry, 0);

	zend_declare_property_null(feathers_router_route_ce, SL("_pattern"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_compiledPattern"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_paths"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_methods"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_hostname"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_converters"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_id"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_name"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_beforeMatch"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_uniqueId"), ZEND_ACC_PROTECTED|ZEND_ACC_STATIC TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_destination"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

/**
 * Phalcon\Mvc\Router\Route constructor
 *
 * @param string pattern
 * @param array paths
 * @param array|string httpMethods
 */
PHP_METHOD(Feathers_Router_Route, __construct) {

	zval *httpMethods = NULL;
	zval *pattern_param = NULL, *destination, *httpMethods_param = NULL;
	zval *pattern = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &pattern_param, &destination, &httpMethods_param);

	if (Z_TYPE_P(pattern_param) != IS_STRING && Z_TYPE_P(pattern_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'pattern' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(pattern_param) == IS_STRING) {
		pattern = pattern_param;
	} else {
		ZEPHIR_INIT_VAR(pattern);
		ZVAL_EMPTY_STRING(pattern);
	}
	if (!httpMethods_param) {
		ZEPHIR_INIT_VAR(httpMethods);
		array_init(httpMethods);
	} else {
		if (Z_TYPE_P(httpMethods_param) != IS_ARRAY) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'httpMethods' must be an array") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	}


	if (!(zephir_instance_of_ev(destination, feathers_router_destinationinterface_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_STR(spl_ce_InvalidArgumentException, "Parameter 'destination' must be an instance of 'Feathers\\Router\\DestinationInterface'");
		return;
	}
	zephir_update_property_this(this_ptr, SL("_destination"), destination TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Feathers_Router_Route, handle) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_1;
	zval *_0;

	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_destination"), PH_NOISY_CC);
	ZEPHIR_INIT_VAR(_1);
	array_init_size(_1, 2);
	add_assoc_stringl_ex(_1, SS("url"), SL("lol"), 1);
	ZEPHIR_CALL_METHOD(NULL, _0, "handle", NULL, _1);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

