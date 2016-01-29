#include <stdio.h>
#include <stdlib.h>
#include <hst.h>

int main(void) {
  printf("%d", hst_tls_init());
  return 0;
}
