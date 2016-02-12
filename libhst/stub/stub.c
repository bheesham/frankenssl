#include <hst.h>
#include <hst_mac.h>

SSL_CTX *hst_tls_init() {
     _HSTN();
     return (SSL_CTX *) 0;
}

void hst_tls_deinit(SSL_CTX *ctx) {
     _HSTN();
}

const char* hst_tls_version() {
     _HSTN();
     return "HST 0.1.0";
}
