
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


ZEPHIR_INIT_CLASS(Feathers_Http_Methods) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Http, Methods, feathers, http_methods, NULL, 0);

	zend_declare_class_constant_string(feathers_http_methods_ce, SL("GET"), "GET" TSRMLS_CC);

	zend_declare_class_constant_string(feathers_http_methods_ce, SL("POST"), "POST" TSRMLS_CC);

	zend_declare_class_constant_string(feathers_http_methods_ce, SL("PUT"), "PUT" TSRMLS_CC);

	zend_declare_class_constant_string(feathers_http_methods_ce, SL("DELETE"), "DELETE" TSRMLS_CC);

	zend_declare_class_constant_string(feathers_http_methods_ce, SL("PATCH"), "PATCH" TSRMLS_CC);

	zend_declare_class_constant_string(feathers_http_methods_ce, SL("OPTIONS"), "OPTIONS" TSRMLS_CC);

	zend_declare_class_constant_string(feathers_http_methods_ce, SL("HEAD"), "HEAD" TSRMLS_CC);

	return SUCCESS;

}

