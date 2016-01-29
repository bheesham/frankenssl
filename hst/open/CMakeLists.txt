add_library(hstopen
  SHARED
  open.c
  open.h)

target_link_libraries(hstopen dl)
