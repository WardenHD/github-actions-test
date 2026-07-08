#include <iostream>
#include <add.hpp>
#include <factorial.hpp>


int main() {
    std::cout << "Result of add 3 + 12 is " << add(3, 12) << std::endl;
    std::cout << "Result of 5! is " << factorial(5) << std::endl;
    return 0;
}
