
extern zend_class_entry *feathers_router_destinationinterface_ce;

ZEPHIR_INIT_CLASS(Feathers_Router_DestinationInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_router_destinationinterface_beforehandle, 0, 0, 1)
	ZEND_ARG_INFO(0, request)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_router_destinationinterface_method_entry) {
	PHP_ABSTRACT_ME(Feathers_Router_DestinationInterface, beforeHandle, arginfo_feathers_router_destinationinterface_beforehandle)
	PHP_ABSTRACT_ME(Feathers_Router_DestinationInterface, handle, NULL)
	PHP_ABSTRACT_ME(Feathers_Router_DestinationInterface, afterHandle, NULL)
  PHP_FE_END
};
