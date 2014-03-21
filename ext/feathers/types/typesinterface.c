
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Types_TypesInterface) {

	ZEPHIR_REGISTER_INTERFACE(Feathers\\Types, TypesInterface, feathers, types_typesinterface, NULL);

	return SUCCESS;

}

