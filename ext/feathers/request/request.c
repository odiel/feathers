
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


ZEPHIR_INIT_CLASS(Feathers_Request_Request) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Request, Request, feathers, request_request, NULL, ZEND_ACC_EXPLICIT_ABSTRACT_CLASS);

	zend_class_implements(feathers_request_request_ce TSRMLS_CC, 1, feathers_request_requestinterface_ce);
	return SUCCESS;

}

