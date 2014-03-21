
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Request_HeaderInterface) {

	ZEPHIR_REGISTER_INTERFACE(Feathers\\Request, HeaderInterface, feathers, request_headerinterface, feathers_request_headerinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Feathers_Request_HeaderInterface, getName);

ZEPHIR_DOC_METHOD(Feathers_Request_HeaderInterface, getValue);

