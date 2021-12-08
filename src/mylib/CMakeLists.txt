add_library(mylib)

target_sources(mylib
    PRIVATE
      src/mylib.cpp)

target_include_directories(mylib
    PUBLIC
      include/
    PRIVATE
      include/mylib/
      src/)

add_executable(mylibtest)

target_sources(mylibtest
    PRIVATE
      test/mylibtest.cpp)

target_link_libraries(mylibtest
    PRIVATE
      mylib
      Catch2::Catch2WithMain
)
catch_discover_tests(mylibtest)
