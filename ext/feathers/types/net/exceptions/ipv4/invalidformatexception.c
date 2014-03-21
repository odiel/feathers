
#ifdef HAVE_CONFIG_H
#include "../../../../../ext_config.h"
#endif

#include <php.h>
#include "../../../../../php_ext.h"
#include "../../../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Types_Net_Exceptions_IpV4_InvalidFormatException) {

	ZEPHIR_REGISTER_CLASS_EX(Feathers\\Types\\Net\\Exceptions\\IpV4, InvalidFormatException, feathers, types_net_exceptions_ipv4_invalidformatexception, feathers_types_typesexception_ce, NULL, 0);

	return SUCCESS;

}

