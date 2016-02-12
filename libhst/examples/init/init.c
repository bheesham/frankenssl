#include <stdio.h>
#include <stdlib.h>
#include <hst.h>

int main(void) {
     printf("Using version: %s\n", hst_tls_version());

     SSL_CTX *new = hst_tls_init();
     hst_tls_deinit(new);
     return 0;
}
