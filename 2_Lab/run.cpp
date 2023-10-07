#include <iostream>
#include "include/Twelve.hpp"

using namespace MAI::OOP::Lab2;

int main() {
    Twelve a("AAB3");
    Twelve b("143");
    Twelve c = a + b;

    std::cout << c << std::endl;

    return 0;
}