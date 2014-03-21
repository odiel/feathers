
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Router_RouteInterface) {

	ZEPHIR_REGISTER_INTERFACE(Feathers\\Router, RouteInterface, feathers, router_routeinterface, feathers_router_routeinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Feathers_Router_RouteInterface, __construct);

ZEPHIR_DOC_METHOD(Feathers_Router_RouteInterface, getDestination);

ZEPHIR_DOC_METHOD(Feathers_Router_RouteInterface, getPattern);

ZEPHIR_DOC_METHOD(Feathers_Router_RouteInterface, getCompiledPattern);

ZEPHIR_DOC_METHOD(Feathers_Router_RouteInterface, setMethods);

ZEPHIR_DOC_METHOD(Feathers_Router_RouteInterface, getMethods);

ZEPHIR_DOC_METHOD(Feathers_Router_RouteInterface, setName);

ZEPHIR_DOC_METHOD(Feathers_Router_RouteInterface, getName);

