
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


ZEPHIR_INIT_CLASS(Feathers_Request_CliRequest) {

	ZEPHIR_REGISTER_CLASS_EX(Feathers\\Request, CliRequest, feathers, request_clirequest, feathers_request_request_ce, feathers_request_clirequest_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Feathers_Request_CliRequest, getQuery) {



}

