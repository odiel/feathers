
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
#include "ext/spl/spl_exceptions.h"
#include "kernel/memory.h"
#include "kernel/string.h"
#include "kernel/array.h"
#include "kernel/operators.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Feathers_Router_Route) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Router, Route, feathers, router_route, feathers_router_route_method_entry, 0);

	zend_declare_property_null(feathers_router_route_ce, SL("_paths"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_hostname"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_converters"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_id"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_beforeMatch"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_uniqueId"), ZEND_ACC_PROTECTED|ZEND_ACC_STATIC TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_pattern"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_compiledPattern"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_destination"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_methods"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(feathers_router_route_ce, SL("_name"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_class_implements(feathers_router_route_ce TSRMLS_CC, 1, feathers_router_routeinterface_ce);
	return SUCCESS;

}

PHP_METHOD(Feathers_Router_Route, __construct) {

	int ZEPHIR_LAST_CALL_STATUS;
	zend_bool _0;
	zval *pattern_param = NULL, *destination, *methods = NULL;
	zval *pattern = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 1, &pattern_param, &destination, &methods);

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
	if (!methods) {
		methods = ZEPHIR_GLOBAL(global_null);
	}


	if (!(zephir_instance_of_ev(destination, feathers_router_destinationinterface_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_STR(spl_ce_InvalidArgumentException, "Parameter 'destination' must be an instance of 'Feathers\\Router\\DestinationInterface'");
		return;
	}
	_0 = Z_TYPE_P(methods) != IS_NULL;
	if (_0) {
		_0 = !zephir_instance_of_ev(methods, feathers_router_methodscollection_ce TSRMLS_CC);
	}
	if (_0) {
		ZEPHIR_THROW_EXCEPTION_STR(spl_ce_InvalidArgumentException, "Parameter 'methods' must be an instance of 'Feathers\\Router\\MethodsCollection'");
		return;
	}
	zephir_update_property_this(this_ptr, SL("_destination"), destination TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("_methods"), methods TSRMLS_CC);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "reconfigure", NULL, pattern);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Feathers_Router_Route, handle) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_1;
	zval *_0, *_2, *_3;

	ZEPHIR_MM_GROW();

	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_destination"), PH_NOISY_CC);
	ZEPHIR_INIT_VAR(_1);
	array_init_size(_1, 2);
	add_assoc_stringl_ex(_1, SS("url"), SL("lol"), 1);
	ZEPHIR_CALL_METHOD(NULL, _0, "beforehandle", NULL, _1);
	zephir_check_call_status();
	_2 = zephir_fetch_nproperty_this(this_ptr, SL("_destination"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, _2, "handle", NULL);
	zephir_check_call_status();
	_3 = zephir_fetch_nproperty_this(this_ptr, SL("_destination"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, _3, "afterhandle", NULL);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Feathers_Router_Route, getDestination) {


	RETURN_MEMBER(this_ptr, "_destination");

}

PHP_METHOD(Feathers_Router_Route, getPattern) {


	RETURN_MEMBER(this_ptr, "_pattern");

}

PHP_METHOD(Feathers_Router_Route, getCompiledPattern) {


	RETURN_MEMBER(this_ptr, "_compiledPattern");

}

PHP_METHOD(Feathers_Router_Route, setMethods) {

	zval *methods;

	zephir_fetch_params(0, 1, 0, &methods);



	if (!(zephir_instance_of_ev(methods, feathers_router_methodscollection_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_STRW(spl_ce_InvalidArgumentException, "Parameter 'methods' must be an instance of 'Feathers\\Router\\MethodsCollection'");
		return;
	}
	zephir_update_property_this(this_ptr, SL("_methods"), methods TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Feathers_Router_Route, getMethods) {


	RETURN_MEMBER(this_ptr, "_methods");

}

PHP_METHOD(Feathers_Router_Route, setName) {

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


	zephir_update_property_this(this_ptr, SL("_name"), name TSRMLS_CC);
	RETURN_THIS();

}

PHP_METHOD(Feathers_Router_Route, getName) {


	RETURN_MEMBER(this_ptr, "_name");

}

PHP_METHOD(Feathers_Router_Route, reConfigure) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *pattern_param = NULL, *paths = NULL, *routePaths, *pcrePattern = NULL, *compiledPattern = NULL, *extracted = NULL;
	zval *pattern = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &pattern_param, &paths);

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
	if (!paths) {
		paths = ZEPHIR_GLOBAL(global_null);
	}


	if (!(zephir_start_with_str(pattern, SL("#")))) {
		if (zephir_memnstr_str(pattern, SL("{"), "feathers/router/route.zep", 96)) {
			ZEPHIR_CALL_METHOD(&extracted, this_ptr, "extractnamedparams", NULL, pattern);
			zephir_check_call_status();
			ZEPHIR_OBS_VAR(pcrePattern);
			zephir_array_fetch_long(&pcrePattern, extracted, 0, PH_NOISY TSRMLS_CC);
			ZEPHIR_OBS_VAR(routePaths);
			zephir_array_fetch_long(&routePaths, extracted, 1, PH_NOISY TSRMLS_CC);
		} else {
			ZEPHIR_CPY_WRT(pcrePattern, pattern);
		}
		ZEPHIR_CALL_METHOD(&compiledPattern, this_ptr, "compilepattern", NULL, pcrePattern);
		zephir_check_call_status();
	} else {
		ZEPHIR_CPY_WRT(compiledPattern, pattern);
	}
	zephir_update_property_this(this_ptr, SL("_pattern"), pattern TSRMLS_CC);
	zephir_update_property_this(this_ptr, SL("_compiledPattern"), compiledPattern TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Feathers_Router_Route, extractNamedParams) {

	zephir_nts_static zephir_fcall_cache_entry *_4 = NULL;
	long _0, _6, _23;
	zend_bool notValid, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18;
	int tmp, cursor, cursorVar, marker, bracketCount = 0, parenthesesCount = 0, foundPattern = 0, intermediate = 0, numberMatches = 0, ZEPHIR_LAST_CALL_STATUS;
	char ch;
	zval *pattern_param = NULL, *matches, _1 = zval_used_for_init, _2 = zval_used_for_init, *_3 = NULL, *_19 = NULL, *_21 = NULL, *_24 = NULL;
	zval *pattern = NULL, *route, *item = NULL, *variable = NULL, *regexp = NULL, *_5 = NULL, *_20 = NULL, *_22 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &pattern_param);

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


	if (zephir_fast_strlen_ev(pattern) <= 0) {
		RETURN_MM_BOOL(0);
	}
	ZEPHIR_INIT_VAR(matches);
	array_init(matches);
	ZEPHIR_INIT_VAR(route);
	ZVAL_EMPTY_STRING(route);
	for (_0 = 0; _0 < Z_STRLEN_P(pattern); _0++) {
		cursor = _0; 
		ch = ZEPHIR_STRING_OFFSET(pattern, _0);
		if (parenthesesCount == 0) {
			if (ch == '{') {
				if (bracketCount == 0) {
					marker = (cursor + 1);
					intermediate = 0;
					notValid = 0;
				}
				bracketCount++;
			} else {
				if (ch == '}') {
					bracketCount--;
					if (intermediate > 0) {
						if (bracketCount == 0) {
							numberMatches++;
							ZEPHIR_INIT_NVAR(variable);
							ZVAL_EMPTY_STRING(variable);
							ZEPHIR_INIT_NVAR(regexp);
							ZVAL_EMPTY_STRING(regexp);
							ZEPHIR_SINIT_NVAR(_1);
							ZVAL_LONG(&_1, marker);
							ZEPHIR_SINIT_NVAR(_2);
							ZVAL_LONG(&_2, (cursor - marker));
							ZEPHIR_CALL_FUNCTION(&_3, "substr", &_4, pattern, &_1, &_2);
							zephir_check_call_status();
							zephir_get_strval(_5, _3);
							ZEPHIR_CPY_WRT(item, _5);
							for (_6 = 0; _6 < Z_STRLEN_P(item); _6++) {
								cursorVar = _6; 
								ch = ZEPHIR_STRING_OFFSET(item, _6);
								if (ch == '\0') {
									break;
								}
								_7 = cursorVar == 0;
								if (_7) {
									_8 = ch >= 'a';
									if (_8) {
										_8 = ch <= 'z';
									}
									_9 = _8;
									if (!(_9)) {
										_10 = ch >= 'A';
										if (_10) {
											_10 = ch <= 'Z';
										}
										_9 = _10;
									}
									_7 = !_9;
								}
								if (_7) {
									notValid = 1;
									break;
								}
								_11 = ch >= 'a';
								if (_11) {
									_11 = ch <= 'z';
								}
								_12 = _11;
								if (!(_12)) {
									_13 = ch >= 'A';
									if (_13) {
										_13 = ch <= 'Z';
									}
									_12 = _13;
								}
								_14 = _12;
								if (!(_14)) {
									_15 = ch >= '0';
									if (_15) {
										_15 = ch <= '9';
									}
									_14 = _15;
								}
								_16 = _14;
								if (!(_16)) {
									_16 = ch == '-';
								}
								_17 = _16;
								if (!(_17)) {
									_17 = ch == '_';
								}
								_18 = _17;
								if (!(_18)) {
									_18 = ch == ':';
								}
								if (_18) {
									if (ch == ':') {
										ZEPHIR_SINIT_NVAR(_1);
										ZVAL_LONG(&_1, 0);
										ZEPHIR_SINIT_NVAR(_2);
										ZVAL_LONG(&_2, cursorVar);
										ZEPHIR_CALL_FUNCTION(&_19, "substr", &_4, item, &_1, &_2);
										zephir_check_call_status();
										zephir_get_strval(_20, _19);
										ZEPHIR_CPY_WRT(variable, _20);
										ZEPHIR_SINIT_NVAR(_1);
										ZVAL_LONG(&_1, (cursorVar + 1));
										ZEPHIR_CALL_FUNCTION(&_21, "substr", &_4, item, &_1);
										zephir_check_call_status();
										zephir_get_strval(_22, _21);
										ZEPHIR_CPY_WRT(regexp, _22);
										break;
									}
								} else {
									notValid = 1;
									break;
								}
							}
							if (!(notValid)) {
								tmp = numberMatches;
								_7 = zephir_is_true(variable);
								if (_7) {
									_7 = zephir_is_true(regexp);
								}
								if (_7) {
									foundPattern = 0;
									for (_23 = 0; _23 < Z_STRLEN_P(regexp); _23++) {
										ch = ZEPHIR_STRING_OFFSET(regexp, _23);
										if (ch == '\0') {
											break;
										}
										if (!(foundPattern)) {
											if (ch == '(') {
												foundPattern = 1;
											}
										} else {
											if (ch == ')') {
												foundPattern = 2;
												break;
											}
										}
									}
									if (foundPattern != 2) {
										zephir_concat_self_str(&route, "(", sizeof("(")-1 TSRMLS_CC);
										zephir_concat_self(&route, regexp TSRMLS_CC);
										zephir_concat_self_str(&route, ")", sizeof(")")-1 TSRMLS_CC);
									} else {
										zephir_concat_self(&route, regexp TSRMLS_CC);
									}
									ZEPHIR_INIT_NVAR(_24);
									ZVAL_LONG(_24, tmp);
									zephir_array_update_zval(&matches, variable, &_24, PH_COPY | PH_SEPARATE);
								} else {
									zephir_concat_self_str(&route, "([^/]*)", sizeof("([^/]*)")-1 TSRMLS_CC);
									ZEPHIR_INIT_NVAR(_24);
									ZVAL_LONG(_24, tmp);
									zephir_array_update_zval(&matches, item, &_24, PH_COPY | PH_SEPARATE);
								}
							} else {
								zephir_concat_self_str(&route, "{", sizeof("{")-1 TSRMLS_CC);
								zephir_concat_self(&route, item TSRMLS_CC);
								zephir_concat_self_str(&route, "}", sizeof("}")-1 TSRMLS_CC);
							}
							continue;
						}
					}
				}
			}
		}
		if (bracketCount == 0) {
			if (ch == '(') {
				parenthesesCount++;
			} else {
				if (ch == ')') {
					parenthesesCount--;
					if (parenthesesCount == 0) {
						numberMatches++;
					}
				}
			}
		}
		if (bracketCount > 0) {
			intermediate++;
		} else {
			zephir_concat_self_char(&route, ch TSRMLS_CC);
		}
	}
	array_init_size(return_value, 3);
	zephir_array_fast_append(return_value, route);
	zephir_array_fast_append(return_value, matches);
	RETURN_MM();

}

PHP_METHOD(Feathers_Router_Route, compilePattern) {

	zval *pattern_param = NULL, *idPattern;
	zval *pattern = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &pattern_param);

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


	if (zephir_memnstr_str(pattern, SL(":"), "feathers/router/route.zep", 265)) {
		ZEPHIR_INIT_VAR(idPattern);
		ZVAL_STRING(idPattern, "/([a-zA-Z0-9\\_\\-]+)", 1);
	}
	if (zephir_memnstr_str(pattern, SL("("), "feathers/router/route.zep", 274)) {
		ZEPHIR_CONCAT_SVS(return_value, "#^", pattern, "$#");
		RETURN_MM();
	}
	if (zephir_memnstr_str(pattern, SL("["), "feathers/router/route.zep", 279)) {
		ZEPHIR_CONCAT_SVS(return_value, "#^", pattern, "$#");
		RETURN_MM();
	}
	RETURN_CTOR(pattern);

}

