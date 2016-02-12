include_directories(../../libressl/include)
include_directories(../include)
link_directories(../../libressl/ssl/.libs)
link_directories(../../libressl/crypto/.libs)

add_library(hstlibre_version
  SHARED
  version.c)

add_library(hstlibre_init
  SHARED
  init.c)

add_library(hstlibre_deinit
  SHARED
  deinit.c)


target_link_libraries(hstlibre_version dl)
target_link_libraries(hstlibre_version crypto)

target_link_libraries(hstlibre_init dl)
target_link_libraries(hstlibre_init ssl)
target_link_libraries(hstlibre_init crypto)

target_link_libraries(hstlibre_deinit dl)
target_link_libraries(hstlibre_deinit ssl)
target_link_libraries(hstlibre_deinit crypto)
