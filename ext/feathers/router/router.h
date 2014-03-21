
extern zend_class_entry *feathers_router_router_ce;

ZEPHIR_INIT_CLASS(Feathers_Router_Router);

PHP_METHOD(Feathers_Router_Router, __construct);
PHP_METHOD(Feathers_Router_Router, handle);
PHP_METHOD(Feathers_Router_Router, add);
PHP_METHOD(Feathers_Router_Router, addGet);
PHP_METHOD(Feathers_Router_Router, addPost);
PHP_METHOD(Feathers_Router_Router, addPut);
PHP_METHOD(Feathers_Router_Router, addPatch);
PHP_METHOD(Feathers_Router_Router, addOptions);
PHP_METHOD(Feathers_Router_Router, addHead);
PHP_METHOD(Feathers_Router_Router, addNotFoundDestination);
PHP_METHOD(Feathers_Router_Router, clear);
PHP_METHOD(Feathers_Router_Router, getMatchedRoute);
PHP_METHOD(Feathers_Router_Router, getRoutes);
PHP_METHOD(Feathers_Router_Router, getRouteByName);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_router___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, routes)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_router_handle, 0, 0, 0)
	ZEND_ARG_INFO(0, uri)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_router_add, 0, 0, 2)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, methods)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_router_addget, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_router_addpost, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_router_addput, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_router_addpatch, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_router_addoptions, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_router_addhead, 0, 0, 1)
	ZEND_ARG_INFO(0, pattern)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_router_addnotfounddestination, 0, 0, 1)
	ZEND_ARG_INFO(0, destination)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_router_getroutebyname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_router_router_method_entry) {
	PHP_ME(Feathers_Router_Router, __construct, arginfo_feathers_router_router___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Router_Router, handle, arginfo_feathers_router_router_handle, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, add, arginfo_feathers_router_router_add, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, addGet, arginfo_feathers_router_router_addget, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, addPost, arginfo_feathers_router_router_addpost, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, addPut, arginfo_feathers_router_router_addput, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, addPatch, arginfo_feathers_router_router_addpatch, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, addOptions, arginfo_feathers_router_router_addoptions, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, addHead, arginfo_feathers_router_router_addhead, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, addNotFoundDestination, arginfo_feathers_router_router_addnotfounddestination, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, clear, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, getMatchedRoute, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, getRoutes, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Router_Router, getRouteByName, arginfo_feathers_router_router_getroutebyname, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
