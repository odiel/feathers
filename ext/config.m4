PHP_ARG_ENABLE(feathers, whether to enable feathers, [ --enable-feathers   Enable Feathers])

if test "$PHP_FEATHERS" = "yes"; then
	AC_DEFINE(HAVE_FEATHERS, 1, [Whether you have Feathers])
	feathers_sources="feathers.c kernel/main.c kernel/memory.c kernel/exception.c kernel/hash.c kernel/debug.c kernel/backtrace.c kernel/object.c kernel/array.c kernel/extended/array.c kernel/string.c kernel/fcall.c kernel/require.c kernel/file.c kernel/operators.c kernel/concat.c kernel/variables.c feathers/http/methods.c feathers/http/statuscodes.c feathers/request/cli/request.c feathers/request/cli/requestinterface.c feathers/request/filescollection.c feathers/request/header.c feathers/request/headerinterface.c feathers/request/headerscollection.c feathers/request/http/request.c feathers/request/http/requestfile.c feathers/request/http/requestinterface.c feathers/request/methodscollection.c feathers/request/requestabstract.c feathers/request/requestinterface.c feathers/router/destinationinterface.c feathers/router/exceptions/duplicatedroutenameexception.c feathers/router/exceptions/routewithnonameexception.c feathers/router/methodscollection.c feathers/router/route.c feathers/router/routeinterface.c feathers/router/router.c feathers/router/routerinterface.c feathers/router/routescollection.c feathers/types/typesexception.c feathers/types/typesinterface.c feathers/types/io/fileabstract.c feathers/types/io/fileinterface.c feathers/types/net/addressinterface.c feathers/types/net/exceptions/ipv4/invalidformatexception.c feathers/types/net/exceptions/ipv4/octetoutofrangeexception.c feathers/types/net/ipv4.c "
	PHP_NEW_EXTENSION(feathers, $feathers_sources, $ext_shared)

	old_CPPFLAGS=$CPPFLAGS
	CPPFLAGS="$CPPFLAGS $INCLUDES"

	AC_CHECK_DECL(
		[HAVE_BUNDLED_PCRE],
		[
			AC_CHECK_HEADERS(
				[ext/pcre/php_pcre.h],
				[
					PHP_ADD_EXTENSION_DEP([feathers], [pcre])
					AC_DEFINE([ZEPHIR_USE_PHP_PCRE], [1], [Whether PHP pcre extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	AC_CHECK_DECL(
		[HAVE_JSON],
		[
			AC_CHECK_HEADERS(
				[ext/json/php_json.h],
				[
					PHP_ADD_EXTENSION_DEP([feathers], [json])
					AC_DEFINE([ZEPHIR_USE_PHP_JSON], [1], [Whether PHP json extension is present at compile time])
				],
				,
				[[#include "main/php.h"]]
			)
		],
		,
		[[#include "php_config.h"]]
	)

	CPPFLAGS=$old_CPPFLAGS
fi
