#include <catch2/catch_test_macros.hpp>
#include <mylib/mylib.h>

TEST_CASE("hello() returns hello world", "[mylib]") {
    REQUIRE(hello() == "hello, world");
}
