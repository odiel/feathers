
extern zend_class_entry *feathers_types_io_fileinterface_ce;

ZEPHIR_INIT_CLASS(Feathers_Types_IO_FileInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_io_fileinterface_copyto, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_io_fileinterface_moveto, 0, 0, 1)
	ZEND_ARG_INFO(0, path)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_feathers_types_io_fileinterface_rename, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(feathers_types_io_fileinterface_method_entry) {
	PHP_ABSTRACT_ME(Feathers_Types_IO_FileInterface, getSize, NULL)
	PHP_ABSTRACT_ME(Feathers_Types_IO_FileInterface, getName, NULL)
	PHP_ABSTRACT_ME(Feathers_Types_IO_FileInterface, getPath, NULL)
	PHP_ABSTRACT_ME(Feathers_Types_IO_FileInterface, getExtension, NULL)
	PHP_ABSTRACT_ME(Feathers_Types_IO_FileInterface, getType, NULL)
	PHP_ABSTRACT_ME(Feathers_Types_IO_FileInterface, getPermissions, NULL)
	PHP_ABSTRACT_ME(Feathers_Types_IO_FileInterface, copyTo, arginfo_feathers_types_io_fileinterface_copyto)
	PHP_ABSTRACT_ME(Feathers_Types_IO_FileInterface, moveTo, arginfo_feathers_types_io_fileinterface_moveto)
	PHP_ABSTRACT_ME(Feathers_Types_IO_FileInterface, rename, arginfo_feathers_types_io_fileinterface_rename)
  PHP_FE_END
};
