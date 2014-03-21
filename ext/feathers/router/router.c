
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
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"
#include "ext/spl/spl_exceptions.h"


ZEPHIR_INIT_CLASS(Feathers_Router_Router) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Router, Router, feathers, router_router, feathers_router_router_method_entry, 0);

	zend_declare_property_null(feathers_router_router_ce, SL("_routes"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(feathers_router_router_ce, SL("_notFoundDestination"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_class_implements(feathers_router_router_ce TSRMLS_CC, 1, feathers_router_routerinterface_ce);
	return SUCCESS;

}

PHP_METHOD(Feathers_Router_Router, __construct) {

	int ZEPHIR_LAST_CALL_STATUS;
	zend_bool _0;
	zval *routes = NULL, *_1;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &routes);

	if (!routes) {
		routes = ZEPHIR_GLOBAL(global_null);
	}


	_0 = Z_TYPE_P(routes) != IS_NULL;
	if (_0) {
		_0 = !zephir_is_instance_of(routes, SL("Feathers\\Router\\RouteCollection") TSRMLS_CC);
	}
	if (_0) {
		ZEPHIR_THROW_EXCEPTION_STR(spl_ce_InvalidArgumentException, "Parameter 'routes' must be an instance of 'Feathers\\Router\\RouteCollection'");
		return;
	}
	ZEPHIR_INIT_VAR(_1);
	object_init_ex(_1, feathers_router_routescollection_ce);
	ZEPHIR_CALL_METHOD(NULL, _1, "__construct", NULL);
	zephir_check_call_status();
	zephir_update_property_this(this_ptr, SL("_routes"), _1 TSRMLS_CC);
	if (Z_TYPE_P(routes) != IS_NULL) {
		zephir_update_property_this(this_ptr, SL("_routes"), routes TSRMLS_CC);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Feathers_Router_Router, handle) {

	zval *uri_param = NULL;
	zval *uri = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 0, 1, &uri_param);

	if (!uri_param) {
		ZEPHIR_INIT_VAR(uri);
		ZVAL_EMPTY_STRING(uri);
	} else {
	if (Z_TYPE_P(uri_param) != IS_STRING && Z_TYPE_P(uri_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'uri' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(uri_param) == IS_STRING) {
		uri = uri_param;
	} else {
		ZEPHIR_INIT_VAR(uri);
		ZVAL_EMPTY_STRING(uri);
	}
	}



}

PHP_METHOD(Feathers_Router_Router, add) {

	zval *pattern_param = NULL, *methods, *name_param = NULL;
	zval *pattern = NULL, *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &pattern_param, &methods, &name_param);

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
	if (!name_param) {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	} else {
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
	}


	if (!(zephir_instance_of_ev(methods, feathers_router_methodscollection_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_STR(spl_ce_InvalidArgumentException, "Parameter 'methods' must be an instance of 'Feathers\\Router\\MethodsCollection'");
		return;
	}
	RETURN_THIS();

}

PHP_METHOD(Feathers_Router_Router, addGet) {

	zval *pattern_param = NULL, *name_param = NULL;
	zval *pattern = NULL, *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &pattern_param, &name_param);

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
	if (!name_param) {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	} else {
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
	}


	RETURN_THIS();

}

PHP_METHOD(Feathers_Router_Router, addPost) {

	zval *pattern_param = NULL, *name_param = NULL;
	zval *pattern = NULL, *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &pattern_param, &name_param);

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
	if (!name_param) {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	} else {
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
	}


	RETURN_THIS();

}

PHP_METHOD(Feathers_Router_Router, addPut) {

	zval *pattern_param = NULL, *name_param = NULL;
	zval *pattern = NULL, *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &pattern_param, &name_param);

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
	if (!name_param) {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	} else {
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
	}


	RETURN_THIS();

}

PHP_METHOD(Feathers_Router_Router, addPatch) {

	zval *pattern_param = NULL, *name_param = NULL;
	zval *pattern = NULL, *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &pattern_param, &name_param);

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
	if (!name_param) {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	} else {
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
	}


	RETURN_THIS();

}

PHP_METHOD(Feathers_Router_Router, addOptions) {

	zval *pattern_param = NULL, *name_param = NULL;
	zval *pattern = NULL, *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &pattern_param, &name_param);

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
	if (!name_param) {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	} else {
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
	}


	RETURN_THIS();

}

PHP_METHOD(Feathers_Router_Router, addHead) {

	zval *pattern_param = NULL, *name_param = NULL;
	zval *pattern = NULL, *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &pattern_param, &name_param);

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
	if (!name_param) {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	} else {
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
	}


	RETURN_THIS();

}

PHP_METHOD(Feathers_Router_Router, addNotFoundDestination) {

	zval *destination;

	zephir_fetch_params(0, 1, 0, &destination);



	if (!(zephir_instance_of_ev(destination, feathers_router_destinationinterface_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_STRW(spl_ce_InvalidArgumentException, "Parameter 'destination' must be an instance of 'Feathers\\Router\\DestinationInterface'");
		return;
	}
	zephir_update_property_this(this_ptr, SL("_notFoundDestination"), destination TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Feathers_Router_Router, clear) {


	RETURN_THISW();

}

PHP_METHOD(Feathers_Router_Router, getMatchedRoute) {



}

PHP_METHOD(Feathers_Router_Router, getRoutes) {


	RETURN_MEMBER(this_ptr, "_routes");

}

PHP_METHOD(Feathers_Router_Router, getRouteByName) {

	zval *name_param = NULL;
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



}

