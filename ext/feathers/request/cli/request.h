
extern zend_class_entry *feathers_request_cli_request_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_Cli_Request);

PHP_METHOD(Feathers_Request_Cli_Request, getQuery);

ZEPHIR_INIT_FUNCS(feathers_request_cli_request_method_entry) {
	PHP_ME(Feathers_Request_Cli_Request, getQuery, NULL, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
