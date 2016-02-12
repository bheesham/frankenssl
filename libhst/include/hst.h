#pragma once

typedef struct ssl_ctx_st SSL_CTX;

SSL_CTX *hst_tls_init();
void hst_tls_deinit(SSL_CTX *);
const char* hst_tls_version();
