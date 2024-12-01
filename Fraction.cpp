#include "Fraction.h"

// Default constructor
Fraction::Fraction() : numerator(0), denominator(1) {}

// Function to reduce the fraction
void Fraction::reduce() {
    int a = numerator;
    int b = denominator;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    numerator /= a;
    denominator /= a;
}

// Function to input values
void Fraction::input() {
    std::cout << "Enter numerator: ";
    std::cin >> numerator;
    std::cout << "Enter denominator (cannot be 0): ";
    std::cin >> denominator;
    if (denominator == 0) {
        std::cout << "Error: denominator cannot be 0. Setting denominator to 1.\n";
        denominator = 1;
    }
    reduce();
}

// Function to output the fraction
void Fraction::output() const {
    std::cout << numerator << "/" << denominator << "\n";
}

// Addition
Fraction Fraction::add(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator + other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    result.reduce();
    return result;
}

// Subtraction
Fraction Fraction::subtract(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator - other.numerator * denominator;
    result.denominator = denominator * other.denominator;
    result.reduce();
    return result;
}

// Multiplication
Fraction Fraction::multiply(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.numerator;
    result.denominator = denominator * other.denominator;
    result.reduce();
    return result;
}

// Division
Fraction Fraction::divide(const Fraction& other) const {
    Fraction result;
    result.numerator = numerator * other.denominator;
    result.denominator = denominator * other.numerator;
    if (result.denominator == 0) {
        std::cout << "Error: division by 0. Setting denominator to 1.\n";
        result.denominator = 1;
    }
    result.reduce();
    return result;
}