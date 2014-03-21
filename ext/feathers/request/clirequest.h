
extern zend_class_entry *feathers_request_clirequest_ce;

ZEPHIR_INIT_CLASS(Feathers_Request_CliRequest);

PHP_METHOD(Feathers_Request_CliRequest, getQuery);

ZEPHIR_INIT_FUNCS(feathers_request_clirequest_method_entry) {
	PHP_ME(Feathers_Request_CliRequest, getQuery, NULL, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
