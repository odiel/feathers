
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Types_IO_FileInterface) {

	ZEPHIR_REGISTER_INTERFACE(Feathers\\Types\\IO, FileInterface, feathers, types_io_fileinterface, feathers_types_io_fileinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Feathers_Types_IO_FileInterface, getSize);

ZEPHIR_DOC_METHOD(Feathers_Types_IO_FileInterface, getName);

ZEPHIR_DOC_METHOD(Feathers_Types_IO_FileInterface, getPath);

ZEPHIR_DOC_METHOD(Feathers_Types_IO_FileInterface, getExtension);

ZEPHIR_DOC_METHOD(Feathers_Types_IO_FileInterface, getType);

ZEPHIR_DOC_METHOD(Feathers_Types_IO_FileInterface, getPermissions);

ZEPHIR_DOC_METHOD(Feathers_Types_IO_FileInterface, copyTo);

ZEPHIR_DOC_METHOD(Feathers_Types_IO_FileInterface, moveTo);

ZEPHIR_DOC_METHOD(Feathers_Types_IO_FileInterface, rename);

