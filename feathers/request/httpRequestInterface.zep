namespace Feathers\Request;

interface HttpRequestInterface
{

	public function getServer(string! name) -> string;
	
	public function getQuery(string! name, defaultValue = null) -> string;

	public function getPost(string! name, defaultValue = null) -> string;

	public function has(string! name) -> boolean;

	public function hasQuery(string! name) -> boolean;

	public function hasPost(string! name) -> boolean;

	public function hasServer(string! name) -> boolean;

	public function getHeader(string! name) -> string;

	public function getScheme() -> string;

	public function isAjax() -> boolean;

	public function isSoap() -> boolean;

	public function isSecure() -> boolean;

	public function getRawBody() -> string;

	public function getJsonRawBody();

	public function getServerAddress() -> string;

	public function getServerName() -> string;

	public function getHttpHost() -> string;

	public function getClientAddress(boolean trustForwardedHeader=false) -> string | boolean ;

	public function getMethod() -> string;

	public function getUserAgent() -> string;

	public function isMethod() -> boolean;

	public function isPost() -> boolean;

	public function isGet() -> boolean;

	public function isPut() -> boolean;

	public function isPatch() -> boolean;

	public function isHead() -> boolean;

	public function isDelete() -> boolean;

	public function isOptions() -> boolean;

	public function hasFiles(boolean onlySuccessful = false) -> long;

	public function getUploadedFiles(boolean onlySuccessful=false) -> <\Feathers\Request\FilesCollection>;
}