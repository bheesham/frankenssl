#include <openssl/ssl.h>
#include <hst_mac.h>

void hst_tls_deinit(SSL_CTX *ctx) {
     _HSTU("boring");
     SSL_CTX_free(ctx);
}
