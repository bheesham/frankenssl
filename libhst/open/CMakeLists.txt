include_directories(../../openssl/include)
include_directories(../include)
link_directories(../../openssl)

add_library(hstopen_version
  SHARED
  version.c)

add_library(hstopen_init
  SHARED
  init.c)

add_library(hstopen_deinit
  SHARED
  deinit.c)

target_link_libraries(hstopen_version dl)
target_link_libraries(hstopen_version crypto)

target_link_libraries(hstopen_init dl)
target_link_libraries(hstopen_init ssl)
target_link_libraries(hstopen_init crypto)

target_link_libraries(hstopen_deinit dl)
target_link_libraries(hstopen_deinit ssl)
target_link_libraries(hstopen_deinit crypto)
