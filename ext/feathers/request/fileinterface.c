
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Request_FileInterface) {

	ZEPHIR_REGISTER_INTERFACE(Feathers\\Request, FileInterface, feathers, request_fileinterface, feathers_request_fileinterface_method_entry);

	return SUCCESS;

}

ZEPHIR_DOC_METHOD(Feathers_Request_FileInterface, getSize);

ZEPHIR_DOC_METHOD(Feathers_Request_FileInterface, getName);

ZEPHIR_DOC_METHOD(Feathers_Request_FileInterface, getPath);

ZEPHIR_DOC_METHOD(Feathers_Request_FileInterface, getExtension);

ZEPHIR_DOC_METHOD(Feathers_Request_FileInterface, copyTo);

ZEPHIR_DOC_METHOD(Feathers_Request_FileInterface, moveTo);

ZEPHIR_DOC_METHOD(Feathers_Request_FileInterface, rename);

