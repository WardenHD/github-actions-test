#include <doctest.h>
#include <add.hpp>


TEST_CASE("add") {
    CHECK_EQ(add(3, 5), 8);
    CHECK_EQ(add(60, 7), 67);
    CHECK_EQ(add(220, 8), 228);
    CHECK_EQ(add(62, 7), 69);
    CHECK_EQ(add(-3, -3), -6);
}