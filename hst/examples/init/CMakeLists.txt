include_directories(../../include)

add_executable(init
  init.c)

target_link_libraries(init hststub)
