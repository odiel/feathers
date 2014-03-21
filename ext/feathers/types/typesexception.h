
extern zend_class_entry *feathers_types_typesexception_ce;

ZEPHIR_INIT_CLASS(Feathers_Types_TypesException);

PHP_METHOD(Feathers_Types_TypesException, __construct);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_typesexception___construct, 0, 0, 0)
	ZEND_ARG_INFO(0, message)
	ZEND_ARG_INFO(0, code)
	ZEND_ARG_INFO(0, previous)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_types_typesexception_method_entry) {
	PHP_ME(Feathers_Types_TypesException, __construct, arginfo_feathers_types_typesexception___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
  PHP_FE_END
};
