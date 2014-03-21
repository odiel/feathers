
extern zend_class_entry *feathers_types_io_fileabstract_ce;

ZEPHIR_INIT_CLASS(Feathers_Types_IO_FileAbstract);

PHP_METHOD(Feathers_Types_IO_FileAbstract, getSize);
PHP_METHOD(Feathers_Types_IO_FileAbstract, getName);
PHP_METHOD(Feathers_Types_IO_FileAbstract, getPath);
PHP_METHOD(Feathers_Types_IO_FileAbstract, getExtension);
PHP_METHOD(Feathers_Types_IO_FileAbstract, getType);
PHP_METHOD(Feathers_Types_IO_FileAbstract, getPermissions);
PHP_METHOD(Feathers_Types_IO_FileAbstract, setSize);
PHP_METHOD(Feathers_Types_IO_FileAbstract, setName);
PHP_METHOD(Feathers_Types_IO_FileAbstract, setPath);
PHP_METHOD(Feathers_Types_IO_FileAbstract, setExtension);
PHP_METHOD(Feathers_Types_IO_FileAbstract, setType);
PHP_METHOD(Feathers_Types_IO_FileAbstract, setPermissions);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_io_fileabstract_setsize, 0, 0, 1)
	ZEND_ARG_INFO(0, size)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_io_fileabstract_setname, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_io_fileabstract_setpath, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_io_fileabstract_setextension, 0, 0, 1)
	ZEND_ARG_INFO(0, extension)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_io_fileabstract_settype, 0, 0, 1)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_io_fileabstract_setpermissions, 0, 0, 1)
	ZEND_ARG_INFO(0, permissions)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_types_io_fileabstract_method_entry) {
	PHP_ME(Feathers_Types_IO_FileAbstract, getSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Types_IO_FileAbstract, getName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Types_IO_FileAbstract, getPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Types_IO_FileAbstract, getExtension, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Types_IO_FileAbstract, getType, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Types_IO_FileAbstract, getPermissions, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Feathers_Types_IO_FileAbstract, setSize, arginfo_feathers_types_io_fileabstract_setsize, ZEND_ACC_PROTECTED)
	PHP_ME(Feathers_Types_IO_FileAbstract, setName, arginfo_feathers_types_io_fileabstract_setname, ZEND_ACC_PROTECTED)
	PHP_ME(Feathers_Types_IO_FileAbstract, setPath, arginfo_feathers_types_io_fileabstract_setpath, ZEND_ACC_PROTECTED)
	PHP_ME(Feathers_Types_IO_FileAbstract, setExtension, arginfo_feathers_types_io_fileabstract_setextension, ZEND_ACC_PROTECTED)
	PHP_ME(Feathers_Types_IO_FileAbstract, setType, arginfo_feathers_types_io_fileabstract_settype, ZEND_ACC_PROTECTED)
	PHP_ME(Feathers_Types_IO_FileAbstract, setPermissions, arginfo_feathers_types_io_fileabstract_setpermissions, ZEND_ACC_PROTECTED)
  PHP_FE_END
};
