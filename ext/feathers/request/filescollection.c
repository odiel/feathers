
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/fcall.h"
#include "kernel/exception.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Feathers_Request_FilesCollection) {

	ZEPHIR_REGISTER_CLASS(Feathers\\Request, FilesCollection, feathers, request_filescollection, feathers_request_filescollection_method_entry, 0);

	zend_declare_property_null(feathers_request_filescollection_ce, SL("_files"), ZEND_ACC_PRIVATE TSRMLS_CC);

	zend_class_implements(feathers_request_filescollection_ce TSRMLS_CC, 1, zend_ce_aggregate);
	zend_class_implements(feathers_request_filescollection_ce TSRMLS_CC, 1, spl_ce_Countable);
	return SUCCESS;

}

PHP_METHOD(Feathers_Request_FilesCollection, __construct) {

	zval *_0;

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(_0);
	array_init(_0);
	zephir_update_property_this(this_ptr, SL("_files"), _0 TSRMLS_CC);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Feathers_Request_FilesCollection, getIterator) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval *_1;
	zend_class_entry *_0;

	ZEPHIR_MM_GROW();

	_0 = zend_fetch_class(SL("ArrayIterator"), ZEND_FETCH_CLASS_AUTO TSRMLS_CC);
	object_init_ex(return_value, _0);
	_1 = zephir_fetch_nproperty_this(this_ptr, SL("_files"), PH_NOISY_CC);
	ZEPHIR_CALL_METHOD(NULL, return_value, "__construct", NULL, _1);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(Feathers_Request_FilesCollection, count) {

	zval *_0;


	_0 = zephir_fetch_nproperty_this(this_ptr, SL("_files"), PH_NOISY_CC);
	RETURN_LONG(zephir_fast_count_int(_0 TSRMLS_CC));

}

PHP_METHOD(Feathers_Request_FilesCollection, add) {

	zval *_0 = NULL;
	zval *file;

	zephir_fetch_params(0, 1, 0, &file);



	if (!(zephir_instance_of_ev(file, feathers_types_io_fileinterface_ce TSRMLS_CC))) {
		ZEPHIR_THROW_EXCEPTION_STRW(spl_ce_InvalidArgumentException, "Parameter 'file' must be an instance of 'Feathers\\Types\\IO\\FileInterface'");
		return;
	}
	zephir_get_strval(_0, file);
	zephir_update_property_array(this_ptr, SL("_files"), _0, file TSRMLS_CC);

}

