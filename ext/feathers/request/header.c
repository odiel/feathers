
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
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/memory.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Feathers_Request_Header) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Request, Header, feathers, request_header, feathers_request_header_method_entry, 0);

	zend_declare_property_null(feathers_request_header_ce, SL("_name"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(feathers_request_header_ce, SL("_value"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_class_implements(feathers_request_header_ce TSRMLS_CC, 1, feathers_request_headerinterface_ce);
	return SUCCESS;

}

PHP_METHOD(Feathers_Request_Header, __construct) {

	zval *name_param = NULL, *value_param = NULL;
	zval *name = NULL, *value = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &name_param, &value_param);

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
	if (Z_TYPE_P(value_param) != IS_STRING && Z_TYPE_P(value_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'value' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(value_param) == IS_STRING) {
		value = value_param;
	} else {
		ZEPHIR_INIT_VAR(value);
		ZVAL_EMPTY_STRING(value);
	}


	zephir_update_property_this(this_ptr, SL("_name"), name TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("_value"), value TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Feathers_Request_Header, getName) {


	RETURN_MEMBER(this_ptr, "_name");

}

PHP_METHOD(Feathers_Request_Header, getValue) {


	RETURN_MEMBER(this_ptr, "_value");

}

PHP_METHOD(Feathers_Request_Header, __toString) {

	zval *_0, *_1;


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_name"), PH_NOISY_CC);
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("_value"), PH_NOISY_CC);
	ZEPHIR_CONCAT_VSV(return_value, _0, "=", _1);
	return;

}

