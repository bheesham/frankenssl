add_library(hstlibre
  SHARED
  libre.c
  libre.h)

target_link_libraries(hstlibre dl)
