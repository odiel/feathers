
namespace Feathers\Http;

class StatusCodes
{
	const VERSION = 'HTTP/1.0';

	const SECTION_1XX = 'Informational';

	const HTTP_CONTINUE = 100;
	const HTTP_CONTINUE_MESSAGE = 'Continue';

	const HTTP_SWITCHING_PROTOCOLS = 101;
	const HTTP_SWITCHING_PROTOCOLS_MESSAGE = 'Switching Protocols';

	const HTTP_PROCESSING = 102;
	const HTTP_PROCESSING_MESSAGE = 'Processing';


	const SECTION_2XX = 'Success';

	const HTTP_OK = 200;
	const HTTP_OK_MESSAGE = 'Ok';

	const HTTP_CREATED = 201;
	const HTTP_CREATED_MESSAGE = 'Created';

	const HTTP_ACCEPTED = 202;
	const HTTP_ACCEPTED_MESSAGE = 'Accepted';

	const HTTP_NO_CONTENT = 204;
	const HTTP_NO_CONTENT_MESSAGE = 'No Content';

	const HTTP_RESET_CONTENT = 205;
	const HTTP_RESET_CONTENT_MESSAGE = 'Reset Content';

	const HTTP_PARTIAL_CONTENT = 206;
	const HTTP_PARTIAL_CONTENT_MESSAGE = 'Partial Content';


	const SECTION_3XX = 'Redirection';

	const HTTP_MULTIPLE_CHOICES = 300;
	const HTTP_MULTIPLE_CHOICES_MESSAGE = 'Multiple Choices';

	const HTTP_MOVED_PERMANENTLY = 301;
	const HTTP_MOVED_PERMANENTLY_MESSAGE = 'Moved Permanently';

	const HTTP_FOUND = 302;
	const HTTP_FOUND_MESSAGE = 'Moved Permanently';

	const HTTP_NOT_MODIFIED = 304;
	const HTTP_NOT_MODIFIED_MESSAGE = 'Not Modified';

	const HTTP_SWITCH_PROXY = 306;
	const HTTP_SWITCH_PROXY_MESSAGE = 'Switch Proxy';

	const HTTP_TEMPORARY_REDIRECT = 307;
	const HTTP_TEMPORARY_REDIRECT_MESSAGE = 'Temporary Redirect';

	const HTTP_PERMANENT_REDIRECT = 308;
	const HTTP_PERMANENT_REDIRECT_MESSAGE = 'Permanent Redirect';


	const SECTION_4XX = 'Client Error';

	const HTTP_BAD_REQUEST = 400;
	const HTTP_BAD_REQUEST_MESSAGE = 'Bad Request';

	const HTTP_UNAUTHORIZED = 401;
	const HTTP_UNAUTHORIZED_MESSAGE = 'Unauthorized';

	const HTTP_PAYMENT_REQUIRED = 402;
	const HTTP_PAYMENT_REQUIRED_MESSAGE = 'Payment Required';

	const HTTP_FORBIDDEN = 403;
	const HTTP_FORBIDDEN_MESSAGE = 'Forbidden';

	const HTTP_NOT_FOUND = 404;
	const HTTP_NOT_FOUND_MESSAGE = 'Not Found';

	const HTTP_METHOD_NOT_ALLOWED = 405;
	const HTTP_METHOD_NOT_ALLOWED_MESSAGE = 'Method Not Allowed';

	const HTTP_NO_ACCEPTABLE = 406;
	const HTTP_NO_ACCEPTABLE_MESSAGE = 'Not Acceptable';

	const HTTP_PROXY_AUTHENTICATION_REQUIRED = 407;
	const HTTP_PROXY_AUTHENTICATION_REQUIRED_MESSAGE = 'Proxy Authentication Required';

	const HTTP_REQUEST_TIMEOUT = 408;
	const HTTP_REQUEST_TIMEOUT_MESSAGE = 'Request Timeout';

	const HTTP_CONFLICT = 409;
	const HTTP_CONFLICT_MESSAGE = 'Conflict';

	const HTTP_GONE = 410;
	const HTTP_GONE_MESSAGE = 'Gone';

	const HTTP_LENGTH_REQUIRED = 411;
	const HTTP_LENGTH_REQUIRED_MESSAGE = 'Length Required';

	const HTTP_PRECONDITION_FAILED = 412;
	const HTTP_PRECONDITION_FAILED_MESSAGE = 'Precondition Failed';

	const HTTP_REQUEST_ENTITY_TOO_LARGE = 413;
	const HTTP_REQUEST_ENTITY_TOO_LARGE_MESSAGE = 'Request Entity Too Large';

	const HTTP_REQUEST_URI_TOO_LONG = 414;
	const HTTP_REQUEST_URI_TOO_LONG_MESSAGE = 'Request-URI Too Long';

	const HTTP_UNSUPPORTED_MEDIA_TYPE = 415;
	const HTTP_UNSUPPORTED_MEDIA_TYPE_MESSAGE = 'Unsupported Media Type';

	const HTTP_REQUESTED_RANGE_NOT_SATISFIABLE = 416;
	const HTTP_REQUESTED_RANGE_NOT_SATISFIABLE_MESSAGE = 'Requested Range Not Satisfiable';

	const HTTP_EXPECTATION_FAILED = 417;
	const HTTP_EXPECTATION_FAILED_MESSAGE = 'Expectation Failed';

	const HTTP_I_AM_A_TEAPOT = 418;
	const HTTP_I_AM_A_TEAPOT_MESSAGE = 'I\'m a teapot';

	const HTTP_AUTHENTICATION_TIMEOUT = 419;
	const HTTP_AUTHENTICATION_TIMEOUT_MESSAGE = 'Authentication Timeout';

	const HTTP_METHOD_FAILURE = 420;
	const HTTP_METHOD_FAILURE_MESSAGE = 'Method Failure';


	const SECTION_5XX = 'Server Error';

	const HTTP_INTERNAL_SERVER_ERROR = 500;
	const HTTP_INTERNAL_SERVER_ERROR_MESSAGE = 'Internal Server Error';

	const HTTP_NOT_IMPLEMENTED = 501;
	const HTTP_NOT_IMPLEMENTED_MESSAGE = 'Not Implemented';

	const HTTP_BAD_GATEWAY = 502;
	const HTTP_BAD_GATEWAY_MESSAGE = 'Bad Gateway';

	const HTTP_SERVICE_UNAVAILABLE = 503;
	const HTTP_SERVICE_UNAVAILABLE_MESSAGE = 'Service Unavailable';

	const HTTP_GATEWAY_TIMEOUT = 504;
	const HTTP_GATEWAY_TIMEOUT_MESSAGE = 'Gateway Timeout';

	const HTTP_VERSION_NOT_SUPPORTED = 505;
	const HTTP_VERSION_NOT_SUPPORTED_MESSAGE = 'HTTP Version Not Supported';

	const HTTP_CONNECTION_TIMED_OUT = 522;
	const HTTP_CONNECTION_TIMED_OUT_MESSAGE = 'Connection timed out';
}
