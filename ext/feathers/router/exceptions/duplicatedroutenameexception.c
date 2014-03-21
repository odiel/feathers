
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


ZEPHIR_INIT_CLASS(Feathers_Router_Exceptions_DuplicatedRouteNameException) {

	ZEPHIR_REGISTER_CLASS_EX(Feathers\\Router\\Exceptions, DuplicatedRouteNameException, feathers, router_exceptions_duplicatedroutenameexception, zend_exception_get_default(TSRMLS_C), NULL, 0);

	return SUCCESS;

}

