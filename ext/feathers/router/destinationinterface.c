
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Router_DestinationInterface) {

	ZEPHIR_REGISTER_INTERFACE(Feathers\\Router, DestinationInterface, feathers, router_destinationinterface, feathers_router_destinationinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Feathers_Router_DestinationInterface, handle);

