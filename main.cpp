#include "math.h"
#include <iostream>

int main() {
    std::cout << "Lab_TRPO calculator v1.0.0" << std::endl;
    int a = 5, b = 3;
    std::cout << "Addition: " << Math::add(a, b) << std::endl;
    std::cout << "Subtraction: " << Math::subtract(a, b) << std::endl;
    std::cout << "Multiply: " << Math::multiply(a, b) << std::endl;
    std::cout << "Divide: " << Math::divide(a, b) << std::endl;
    return 0;
}