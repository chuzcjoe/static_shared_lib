#include "mathlib.h"
#include <iostream>

double MathLib::add(double a, double b) {
    return a + b;
}

double MathLib::subtract(double a, double b) {
    return a - b;
}

double MathLib::multiply(double a, double b) {
    return a * b;
}

double MathLib::divide(double a, double b) {
    if (b == 0) {
        throw std::domain_error("Division by zero.");
    }
    return a / b;
}

MathLib::MathLib() {}
MathLib::~MathLib() {}