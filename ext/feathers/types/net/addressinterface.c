
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Types_Net_AddressInterface) {

	ZEPHIR_REGISTER_INTERFACE_EX(Feathers\\Types\\Net, AddressInterface, feathers, types_net_addressinterface, feathers_types_typesinterface_ce, NULL);

	return SUCCESS;

}

