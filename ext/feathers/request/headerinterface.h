
extern zend_class_entry *feathers_request_headerinterface_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_HeaderInterface);

ZEPHIR_INIT_FUNCS(feathers_request_headerinterface_method_entry) {
	PHP_ABSTRACT_ME(Feathers_Request_HeaderInterface, getName, NULL)
	PHP_ABSTRACT_ME(Feathers_Request_HeaderInterface, getValue, NULL)
  PHP_FE_END
};
