
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


ZEPHIR_INIT_CLASS(Feathers_Request_Cli_Request) {

	ZEPHIR_REGISTER_CLASS_EX(Feathers\\Request\\Cli, Request, feathers, request_cli_request, feathers_request_requestabstract_ce, feathers_request_cli_request_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Feathers_Request_Cli_Request, getQuery) {



}

