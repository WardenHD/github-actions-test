#include <doctest.h>
#include <factorial.hpp>


TEST_CASE("factorial") {
    CHECK_EQ(factorial(0), 1);
    CHECK_EQ(factorial(1), 1);
    CHECK_EQ(factorial(2), 2);
    CHECK_EQ(factorial(3), 6);
    CHECK_EQ(factorial(5), 120);
}
