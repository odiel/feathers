
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_FEATHERS_H
#define PHP_FEATHERS_H 1

#define ZEPHIR_RELEASE 1

#include "kernel/globals.h"

#define PHP_FEATHERS_NAME        "feathers"
#define PHP_FEATHERS_VERSION     "0.0.1"
#define PHP_FEATHERS_EXTNAME     "feathers"
#define PHP_FEATHERS_AUTHOR      ""
#define PHP_FEATHERS_ZEPVERSION  "0.4.0a"
#define PHP_FEATHERS_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(feathers)

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	/* Max recursion control */
	unsigned int recursive_lock;

	/* Global constants */
	zval *global_true;
	zval *global_false;
	zval *global_null;
	
ZEND_END_MODULE_GLOBALS(feathers)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(feathers)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) TSRMG(feathers_globals_id, zend_feathers_globals *, v)
#else
	#define ZEPHIR_GLOBAL(v) (feathers_globals.v)
#endif

#ifdef ZTS
	#define ZEPHIR_VGLOBAL ((zend_feathers_globals *) (*((void ***) tsrm_ls))[TSRM_UNSHUFFLE_RSRC_ID(feathers_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(feathers_globals)
#endif

#define zephir_globals feathers_globals
#define zend_zephir_globals zend_feathers_globals

extern zend_module_entry feathers_module_entry;
#define phpext_feathers_ptr &feathers_module_entry

#endif
