
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "ext/spl/spl_exceptions.h"
#include "kernel/exception.h"


ZEPHIR_INIT_CLASS(Feathers_Types_IO_FileAbstract) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Types\\IO, FileAbstract, feathers, types_io_fileabstract, feathers_types_io_fileabstract_method_entry, ZEND_ACC_EXPLICIT_ABSTRACT_CLASS);

	zend_declare_property_null(feathers_types_io_fileabstract_ce, SL("_name"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(feathers_types_io_fileabstract_ce, SL("_path"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(feathers_types_io_fileabstract_ce, SL("_size"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(feathers_types_io_fileabstract_ce, SL("_extension"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(feathers_types_io_fileabstract_ce, SL("_type"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_declare_property_null(feathers_types_io_fileabstract_ce, SL("_permissions"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_class_implements(feathers_types_io_fileabstract_ce TSRMLS_CC, 1, feathers_types_io_fileinterface_ce);
	return SUCCESS;

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, getSize) {


	RETURN_MEMBER(this_ptr, "_size");

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, getName) {


	RETURN_MEMBER(this_ptr, "_name");

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, getPath) {


	RETURN_MEMBER(this_ptr, "_path");

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, getExtension) {


	RETURN_MEMBER(this_ptr, "_extension");

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, getType) {


	RETURN_MEMBER(this_ptr, "_type");

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, getPermissions) {


	RETURN_MEMBER(this_ptr, "_permissions");

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, setSize) {

	zval *size_param = NULL, *_0;
	long size;

	zephir_fetch_params(0, 1, 0, &size_param);

	size = zephir_get_intval(size_param);


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(_0, size);
	zephir_update_property_zval(this_ptr, SL("_size"), _0 TSRMLS_CC);
	RETURN_THISW();

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, setName) {

	zval *name_param = NULL;
	zval *name = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &name_param);

	if (Z_TYPE_P(name_param) != IS_STRING && Z_TYPE_P(name_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'name' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(name_param) == IS_STRING) {
		name = name_param;
	} else {
		ZEPHIR_INIT_VAR(name);
		ZVAL_EMPTY_STRING(name);
	}


	zephir_update_property_this(this_ptr, SL("_name"), name TSRMLS_CC);
	RETURN_THIS();

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, setPath) {

	zval *path_param = NULL;
	zval *path = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &path_param);

	if (Z_TYPE_P(path_param) != IS_STRING && Z_TYPE_P(path_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'path' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(path_param) == IS_STRING) {
		path = path_param;
	} else {
		ZEPHIR_INIT_VAR(path);
		ZVAL_EMPTY_STRING(path);
	}


	zephir_update_property_this(this_ptr, SL("_path"), path TSRMLS_CC);
	RETURN_THIS();

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, setExtension) {

	zval *extension_param = NULL;
	zval *extension = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &extension_param);

	if (Z_TYPE_P(extension_param) != IS_STRING && Z_TYPE_P(extension_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'extension' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(extension_param) == IS_STRING) {
		extension = extension_param;
	} else {
		ZEPHIR_INIT_VAR(extension);
		ZVAL_EMPTY_STRING(extension);
	}


	zephir_update_property_this(this_ptr, SL("_extension"), extension TSRMLS_CC);
	RETURN_THIS();

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, setType) {

	zval *type_param = NULL;
	zval *type = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &type_param);

	if (Z_TYPE_P(type_param) != IS_STRING && Z_TYPE_P(type_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'type' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(type_param) == IS_STRING) {
		type = type_param;
	} else {
		ZEPHIR_INIT_VAR(type);
		ZVAL_EMPTY_STRING(type);
	}


	zephir_update_property_this(this_ptr, SL("_type"), type TSRMLS_CC);
	RETURN_THIS();

}

PHP_METHOD(Feathers_Types_IO_FileAbstract, setPermissions) {

	zval *permissions_param = NULL;
	zval *permissions = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &permissions_param);

	if (Z_TYPE_P(permissions_param) != IS_STRING && Z_TYPE_P(permissions_param) != IS_NULL) {
		zephir_throw_exception_string(spl_ce_InvalidArgumentException, SL("Parameter 'permissions' must be a string") TSRMLS_CC);
		RETURN_MM_NULL();
	}

	if (Z_TYPE_P(permissions_param) == IS_STRING) {
		permissions = permissions_param;
	} else {
		ZEPHIR_INIT_VAR(permissions);
		ZVAL_EMPTY_STRING(permissions);
	}


	zephir_update_property_this(this_ptr, SL("_permissions"), permissions TSRMLS_CC);
	RETURN_THIS();

}

