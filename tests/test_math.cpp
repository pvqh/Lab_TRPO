// Модульные тесты для класса Math.
// Каждая проверка выводит OK или FAIL; при ошибке программа возвращает код 1.
#include "../math.h"
#include <iostream>

static int failed = 0;

static void check(bool condition, const char* name) {
    if (condition) {
        std::cout << "[ OK ]   " << name << std::endl;
    } else {
        std::cout << "[ FAIL ] " << name << std::endl;
        failed++;
    }
}

int main() {
    check(Math::add(2, 3) == 5, "add(2, 3) == 5");
    check(Math::add(-4, 4) == 0, "add(-4, 4) == 0");
    check(Math::subtract(10, 3) == 7, "subtract(10, 3) == 7");
    check(Math::subtract(3, 10) == -7, "subtract(3, 10) == -7");
    check(Math::multiply(6, 7) == 42, "multiply(6, 7) == 42");
    check(Math::multiply(5, 0) == 0, "multiply(5, 0) == 0");
    check(Math::divide(10, 2) == 5, "divide(10, 2) == 5");
    check(Math::divide(7, 2) == 3, "divide(7, 2) == 3");

    bool thrown = false;
    try {
        Math::divide(1, 0);
    } catch (const std::invalid_argument&) {
        thrown = true;
    }
    check(thrown, "divide(1, 0) throws invalid_argument");

    if (failed > 0) {
        std::cout << "Failed tests: " << failed << std::endl;
        return 1;
    }
    std::cout << "All tests passed" << std::endl;
    return 0;
}
