
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
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/fcall.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"


ZEPHIR_INIT_CLASS(Feathers_Request_MethodsCollection) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Request, MethodsCollection, feathers, request_methodscollection, feathers_request_methodscollection_method_entry, 0);

	zend_declare_property_null(feathers_request_methodscollection_ce, SL("_methods"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_class_implements(feathers_request_methodscollection_ce TSRMLS_CC, 1, zend_ce_aggregate);
	zend_class_implements(feathers_request_methodscollection_ce TSRMLS_CC, 1, spl_ce_Countable);
	return SUCCESS;

}

PHP_METHOD(Feathers_Request_MethodsCollection, __construct) {

	zval *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	array_init(_0);
	zephir_update_property_this(this_ptr, SL("_methods"), _0 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Feathers_Request_MethodsCollection, getIterator) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_1;
	zend_class_entry *_0;

	ZEPHIR_MM_GROW();

	_0 = zend_fetch_class(SL("ArrayIterator"), ZEND_FETCH_CLASS_AUTO TSRMLS_CC);
	object_init_ex(return_value, _0);
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("_methods"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, _1);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Feathers_Request_MethodsCollection, count) {

	zval *_0;


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_methods"), PH_NOISY_CC);
	RETURN_LONG(zephir_fast_count_int(_0 TSRMLS_CC));

}

PHP_METHOD(Feathers_Request_MethodsCollection, add) {

	zval *method_param = NULL;
	zval *method = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &method_param);

	if (Z_TYPE_P(method_param) != IS_STRING && Z_TYPE_P(method_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'method' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(method_param) == IS_STRING) {
		method = method_param;
	} else {
		ZEPHIR_INIT_VAR(method);
		ZVAL_EMPTY_STRING(method);
	}


	zephir_update_property_array(this_ptr, SL("_methods"), method, method TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

