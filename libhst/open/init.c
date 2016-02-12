#include <openssl/err.h>
#include <openssl/ssl.h>
#include <hst_mac.h>

SSL_CTX *hst_tls_init() {
     _HSTU("open");
     SSL_load_error_strings();
     SSL_library_init();

     const SSL_METHOD *method = TLS_client_method();
     return SSL_CTX_new(method);
}
