
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


ZEPHIR_INIT_CLASS(Feathers_Http_Verbs) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Http, Verbs, feathers, http_verbs, NULL, 0);

	zend_declare_class_constant_null(feathers_http_verbs_ce, SL("GET") TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_verbs_ce, SL("POST") TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_verbs_ce, SL("PUT") TSRMLS_CC);

	zend_declare_class_constant_null(feathers_http_verbs_ce, SL("DELETE") TSRMLS_CC);

	return SUCCESS;

}

