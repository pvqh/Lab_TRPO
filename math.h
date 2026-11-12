#pragma once

#include <stdexcept>

/// Класс с простыми арифметическими операциями над целыми числами.
class Math {
public:
    /// Сложение двух чисел.
    static int add(int a, int b);
    /// Вычитание: a - b.
    static int subtract(int a, int b);
    /// Умножение двух чисел.
    static int multiply(int a, int b);
    /// Целочисленное деление: a / b. При b == 0 выбрасывает std::invalid_argument.
    static int divide(int a, int b);
};
