
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
#include "kernel/fcall.h"
#include "kernel/memory.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Feathers_Types_TypesException) {

	ZEPHIR_REGISTER_CLASS_EX(Feathers\\Types, TypesException, feathers, types_typesexception, zend_exception_get_default(TSRMLS_C), feathers_types_typesexception_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Feathers_Types_TypesException, __construct) {

	zend_bool _0;
	int code, ZEPHIR_LAST_CALL_STATUS;
	zval *message_param = NULL, *code_param = NULL, *previous = NULL, *_1;
	zval *message = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 3, &message_param, &code_param, &previous);

	if (!message_param) {
		ZEPHIR_INIT_VAR(message);
		ZVAL_STRING(message, "", 1);
	} else {
	if (Z_TYPE_P(message_param) != IS_STRING && Z_TYPE_P(message_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'message' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(message_param) == IS_STRING) {
		message = message_param;
	} else {
		ZEPHIR_INIT_VAR(message);
		ZVAL_EMPTY_STRING(message);
	}
	}
	if (!code_param) {
		code = 0;
	} else {
		code = zephir_get_intval(code_param);
	}
	if (!previous) {
		previous = ZEPHIR_GLOBAL(global_null);
	}


	_0 = Z_TYPE_P(previous) != IS_NULL;
	if (_0) {
		_0 = !zephir_instance_of_ev(previous, zend_exception_get_default(TSRMLS_C) TSRMLS_CC);
	}
	if (_0) {
		ZEPHIR_THROW_EXCEPTION_STR(spl_ce_InvalidArgumentException, "Parameter 'previous' must be an instance of 'Exception'");
		return;
	}
	ZEPHIR_INIT_VAR(_1);
	ZVAL_LONG(_1, code);
	ZEPHIR_CALL_PARENT(NULL, feathers_types_typesexception_ce, this_ptr, "__construct", NULL, message, _1, previous);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

