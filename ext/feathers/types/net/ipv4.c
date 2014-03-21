
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
#include "kernel/fcall.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/string.h"
#include "kernel/array.h"
#include "kernel/object.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Feathers_Types_Net_IpV4) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Types\\Net, IpV4, feathers, types_net_ipv4, feathers_types_net_ipv4_method_entry, 0);

	zend_declare_property_null(feathers_types_net_ipv4_ce, SL("octet1"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(feathers_types_net_ipv4_ce, SL("octet2"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(feathers_types_net_ipv4_ce, SL("octet3"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(feathers_types_net_ipv4_ce, SL("octet4"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_class_constant_string(feathers_types_net_ipv4_ce, SL("LOCALHOST"), "localhost" TSRMLS_CC);

	zend_class_implements(feathers_types_net_ipv4_ce TSRMLS_CC, 1, feathers_types_net_addressinterface_ce);
	return SUCCESS;

}

PHP_METHOD(Feathers_Types_Net_IpV4, __construct) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *address_param = NULL;
	zval *address = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &address_param);

	if (Z_TYPE_P(address_param) != IS_STRING && Z_TYPE_P(address_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'address' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(address_param) == IS_STRING) {
		address = address_param;
	} else {
		ZEPHIR_INIT_VAR(address);
		ZVAL_EMPTY_STRING(address);
	}


	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setfromstring", NULL, address);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Feathers_Types_Net_IpV4, setFromString) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *address_param = NULL, *parts, *_0, *_1, *_2, *_3;
	zval *address = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &address_param);

	if (Z_TYPE_P(address_param) != IS_STRING && Z_TYPE_P(address_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'address' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(address_param) == IS_STRING) {
		address = address_param;
	} else {
		ZEPHIR_INIT_VAR(address);
		ZVAL_EMPTY_STRING(address);
	}
	ZEPHIR_SEPARATE_PARAM(address);


	if (ZEPHIR_IS_STRING(address, "localhost")) {
		ZEPHIR_INIT_NVAR(address);
		ZVAL_STRING(address, "127.0.0.1", 1);
	}
	ZEPHIR_INIT_VAR(parts);
	zephir_fast_explode_str(parts, SL("."), address, LONG_MAX TSRMLS_CC);
	if (zephir_fast_count_int(parts TSRMLS_CC) != 4) {
		ZEPHIR_THROW_EXCEPTION_STR(feathers_types_net_exceptions_ipv4_invalidformatexception_ce, "Invalid Ip address format.");
		return;
	}
	zephir_array_fetch_long(&_0, parts, 0, PH_NOISY | PH_READONLY TSRMLS_CC);
	zephir_array_fetch_long(&_1, parts, 1, PH_NOISY | PH_READONLY TSRMLS_CC);
	zephir_array_fetch_long(&_2, parts, 2, PH_NOISY | PH_READONLY TSRMLS_CC);
	zephir_array_fetch_long(&_3, parts, 3, PH_NOISY | PH_READONLY TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "setfromoctets", NULL, _0, _1, _2, _3);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Feathers_Types_Net_IpV4, setFromOctets) {

	zend_bool _0, _1, _2, _3;
	zval *octet1_param = NULL, *octet2_param = NULL, *octet3_param = NULL, *octet4_param = NULL, *_4;
	int octet1, octet2, octet3, octet4;

	zephir_fetch_params(0, 4, 0, &octet1_param, &octet2_param, &octet3_param, &octet4_param);

	octet1 = zephir_get_intval(octet1_param);
	octet2 = zephir_get_intval(octet2_param);
	octet3 = zephir_get_intval(octet3_param);
	octet4 = zephir_get_intval(octet4_param);


	_0 = octet1 < 0;
	if (!(_0)) {
		_0 = octet1 > 255;
	}
	if (_0) {
		ZEPHIR_THROW_EXCEPTION_STRW(feathers_types_net_exceptions_ipv4_octetoutofrangeexception_ce, "Octet 1 is out of range.");
		return;
	}
	_1 = octet2 < 0;
	if (!(_1)) {
		_1 = octet2 > 255;
	}
	if (_1) {
		ZEPHIR_THROW_EXCEPTION_STRW(feathers_types_net_exceptions_ipv4_octetoutofrangeexception_ce, "Octet 2 is out of range.");
		return;
	}
	_2 = octet3 < 0;
	if (!(_2)) {
		_2 = octet3 > 255;
	}
	if (_2) {
		ZEPHIR_THROW_EXCEPTION_STRW(feathers_types_net_exceptions_ipv4_octetoutofrangeexception_ce, "Octet 3 is out of range.");
		return;
	}
	_3 = octet4 < 0;
	if (!(_3)) {
		_3 = octet4 > 255;
	}
	if (_3) {
		ZEPHIR_THROW_EXCEPTION_STRW(feathers_types_net_exceptions_ipv4_octetoutofrangeexception_ce, "Octet 4 is out of range.");
		return;
	}
	ZEPHIR_INIT_ZVAL_NREF(_4);
	ZVAL_LONG(_4, octet1);
	zephir_update_property_zval(this_ptr, SL("octet1"), _4 TSRMLS_CC);
	ZEPHIR_INIT_ZVAL_NREF(_4);
	ZVAL_LONG(_4, octet2);
	zephir_update_property_zval(this_ptr, SL("octet2"), _4 TSRMLS_CC);
	ZEPHIR_INIT_ZVAL_NREF(_4);
	ZVAL_LONG(_4, octet3);
	zephir_update_property_zval(this_ptr, SL("octet3"), _4 TSRMLS_CC);
	ZEPHIR_INIT_ZVAL_NREF(_4);
	ZVAL_LONG(_4, octet4);
	zephir_update_property_zval(this_ptr, SL("octet4"), _4 TSRMLS_CC);

}

PHP_METHOD(Feathers_Types_Net_IpV4, __toString) {

	zval *_0, *_1, *_2, *_3;


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("octet1"), PH_NOISY_CC);
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("octet2"), PH_NOISY_CC);
	_2 = zephir_fetch_nproperty_this(this_ptr, SL("octet3"), PH_NOISY_CC);
	_3 = zephir_fetch_nproperty_this(this_ptr, SL("octet4"), PH_NOISY_CC);
	ZEPHIR_CONCAT_VSVSVSV(return_value, _0, ".", _1, ".", _2, ".", _3);
	return;

}

