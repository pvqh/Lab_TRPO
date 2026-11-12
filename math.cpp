#include "math.h"

int Math::add(int a, int b) {
    return a + b; // dev1 version
}

int Math::subtract(int a, int b) {
    return a - b;
}

int Math::multiply(int a, int b) {
    return a * b;
}

int Math::divide(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("division by zero");
    }
    return a / b;
}
