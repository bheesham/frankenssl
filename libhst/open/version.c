#include <openssl/crypto.h>
#include <hst_mac.h>

const char *hst_tls_version() {
     _HSTU("open");
     return SSLeay_version(SSLEAY_VERSION);
}
