#include <openssl/crypto.h>
#include <hst_mac.h>

const char *hst_tls_version() {
     _HSTU("boring");
     return SSLeay_version(SSLEAY_VERSION);
}
