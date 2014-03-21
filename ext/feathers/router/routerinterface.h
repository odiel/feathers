
extern zend_class_entry *feathers_router_routerinterface_ce;

ZEPHIR_INIT_CLASS(Feathers_Router_RouterInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routerinterface_handle, 0, 0, 0)
	ZEND_ARG_INFO(0, uri)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routerinterface_add, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, methods)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routerinterface_addget, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routerinterface_addpost, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routerinterface_addput, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routerinterface_addpatch, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routerinterface_addoptions, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routerinterface_addhead, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_routerinterface_getroutebyname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_router_routerinterface_method_entry) {
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, handle, arginfo_feathers_router_routerinterface_handle)
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, add, arginfo_feathers_router_routerinterface_add)
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, addGet, arginfo_feathers_router_routerinterface_addget)
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, addPost, arginfo_feathers_router_routerinterface_addpost)
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, addPut, arginfo_feathers_router_routerinterface_addput)
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, addPatch, arginfo_feathers_router_routerinterface_addpatch)
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, addOptions, arginfo_feathers_router_routerinterface_addoptions)
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, addHead, arginfo_feathers_router_routerinterface_addhead)
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, clear, NULL)
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, getMatchedRoute, NULL)
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, getRoutes, NULL)
	PHP_ABSTRACT_ME(Feathers_Router_RouterInterface, getRouteByName, arginfo_feathers_router_routerinterface_getroutebyname)
  PHP_FE_END
};
