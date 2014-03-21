
extern zend_class_entry *feathers_types_net_ipv4_ce;

ZEPHIR_INIT_CLASS(Feathers_Types_Net_IpV4);

PHP_METHOD(Feathers_Types_Net_IpV4, __construct);
PHP_METHOD(Feathers_Types_Net_IpV4, setFromString);
PHP_METHOD(Feathers_Types_Net_IpV4, setFromOctets);
PHP_METHOD(Feathers_Types_Net_IpV4, __toString);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_net_ipv4___construct, 0, 0, 1)
	ZEND_ARG_INFO(0, address)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_net_ipv4_setfromstring, 0, 0, 1)
	ZEND_ARG_INFO(0, address)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_net_ipv4_setfromoctets, 0, 0, 4)
	ZEND_ARG_INFO(0, octet1)
	ZEND_ARG_INFO(0, octet2)
	ZEND_ARG_INFO(0, octet3)
	ZEND_ARG_INFO(0, octet4)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_types_net_ipv4_method_entry) {
	PHP_ME(Feathers_Types_Net_IpV4, __construct, arginfo_feathers_types_net_ipv4___construct, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Feathers_Types_Net_IpV4, setFromString, arginfo_feathers_types_net_ipv4_setfromstring, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Types_Net_IpV4, setFromOctets, arginfo_feathers_types_net_ipv4_setfromoctets, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Types_Net_IpV4, __toString, NULL, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
