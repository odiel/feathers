
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
#include "kernel/exception.h"
#include "kernel/operators.h"
#include "kernel/array.h"


ZEPHIR_INIT_CLASS(Feathers_Router_RoutesCollection) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Router, RoutesCollection, feathers, router_routescollection, feathers_router_routescollection_method_entry, 0);

	zend_declare_property_null(feathers_router_routescollection_ce, SL("_routes"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_class_implements(feathers_router_routescollection_ce TSRMLS_CC, 1, zend_ce_aggregate);
	zend_class_implements(feathers_router_routescollection_ce TSRMLS_CC, 1, spl_ce_Countable);
	return SUCCESS;

}

PHP_METHOD(Feathers_Router_RoutesCollection, __construct) {

	zval *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	array_init(_0);
	zephir_update_property_this(this_ptr, SL("_routes"), _0 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Feathers_Router_RoutesCollection, getIterator) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_1;
	zend_class_entry *_0;

	ZEPHIR_MM_GROW();

	_0 = zend_fetch_class(SL("ArrayIterator"), ZEND_FETCH_CLASS_AUTO TSRMLS_CC);
	object_init_ex(return_value, _0);
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("_routes"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, _1);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Feathers_Router_RoutesCollection, count) {

	zval *_0;


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_routes"), PH_NOISY_CC);
	RETURN_LONG(zephir_fast_count_int(_0 TSRMLS_CC));

}

PHP_METHOD(Feathers_Router_RoutesCollection, add) {

	zend_bool _0;
	int ZEPHIR_LAST_CALL_STATUS;
	zval *route, *routeName = NULL, *_1;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &route);

	ZEPHIR_INIT_VAR(routeName);
	ZVAL_STRING(routeName, "", 1);


	if (!(zephir_instance_of_ev(route, feathers_router_route_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_STR(spl_ce_InvalidArgumentException, "Parameter 'route' must be an instance of 'Feathers\\Router\\Route'");
		return;
	}
	ZEPHIR_CALL_METHOD(&routeName, route, "getname",  NULL);
	zephir_check_call_status();
	_0 = ZEPHIR_IS_STRING(routeName, "");
	if (!(_0)) {
		_0 = Z_TYPE_P(routeName) == IS_NULL;
	}
	if (_0) {
		ZEPHIR_THROW_EXCEPTION_STR(feathers_router_exceptions_routewithnonameexception_ce, "Route must have a name.");
		return;
	}
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("_routes"), PH_NOISY_CC);
	if (zephir_array_isset(_1, routeName)) {
		ZEPHIR_THROW_EXCEPTION_STR(feathers_router_exceptions_duplicatedroutenameexception_ce, "A Route was already defined with the same name.");
		return;
	}
	zephir_update_property_array(this_ptr, SL("_routes"), routeName, route TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

