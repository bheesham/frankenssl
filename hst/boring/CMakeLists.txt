add_library(hstboring
  SHARED
  boring.c
  boring.h)

target_link_libraries(hstboring dl)
