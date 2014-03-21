
extern zend_class_entry *feathers_request_cli_clirequest_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_Cli_CliRequest);

PHP_METHOD(Feathers_Request_Cli_CliRequest, getQuery);

ZEPHIR_INIT_FUNCS(feathers_request_cli_clirequest_method_entry) {
	PHP_ME(Feathers_Request_Cli_CliRequest, getQuery, NULL, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
