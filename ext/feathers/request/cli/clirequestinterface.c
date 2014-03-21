
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(Feathers_Request_Cli_CliRequestInterface) {

	ZEPHIR_REGISTER_INTERFACE(Feathers\\Request\\Cli, CliRequestInterface, feathers, request_cli_clirequestinterface, NULL);

	return SUCCESS;

}

