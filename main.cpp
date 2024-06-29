#include "mathlib.h"
#include <iostream>

int main() {
    MathLib m;
    try {
        double x = 10.0, y = 5.0;
        std::cout << "input x and y: " << x << ", " << y << '\n';
        std::cout << "Addition: " << m.add(x, y) << '\n';
        std::cout << "Subtraction: " << m.subtract(x, y) << '\n';
        std::cout << "Multiplication: " << m.multiply(x, y) << '\n';
        std::cout << "Division: " << m.divide(x, y) << '\n';
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << '\n';
    }
    return 0;
}