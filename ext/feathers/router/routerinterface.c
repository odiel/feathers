
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Router_RouterInterface) {

	ZEPHIR_REGISTER_INTERFACE(Feathers\\Router, RouterInterface, feathers, router_routerinterface, feathers_router_routerinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, handle);

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, add);

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, addGet);

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, addPost);

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, addPut);

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, addPatch);

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, addOptions);

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, addHead);

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, clear);

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, getMatchedRoute);

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, getRoutes);

ZEPHIR_DOC_METHOD(Feathers_Router_RouterInterface, getRouteByName);

