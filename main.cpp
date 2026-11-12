#include "math.h"
#include <iostream>

int main() {
    int a = 5, b = 3;
    std::cout << "Addition: " << Math::add(a, b) << std::endl;
    std::cout << "Subtraction: " << Math::subtract(a, b) << std::endl;
    std::cout << "Multiply: " << Math::multiply(a, b) << std::endl;
    std::cout << "Divide: " << Math::divide(a, b) << std::endl;
    return 0; // exit code 0 (person2)
}