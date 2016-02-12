include_directories(../../boringssl/include)
include_directories(../include)
link_directories(../../boringssl/build/ssl)
link_directories(../../boringssl/build/crypto)

add_library(hstboring_version
  SHARED
  version.c)

add_library(hstboring_init
  SHARED
  init.c)

add_library(hstboring_deinit
  SHARED
  deinit.c)


target_link_libraries(hstboring_version dl)
target_link_libraries(hstboring_version crypto)

target_link_libraries(hstboring_init dl)
target_link_libraries(hstboring_init ssl)
target_link_libraries(hstboring_init crypto)

target_link_libraries(hstboring_deinit dl)
target_link_libraries(hstboring_deinit ssl)
target_link_libraries(hstboring_deinit crypto)
