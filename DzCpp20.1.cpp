#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    Fraction fraction1, fraction2;

    std::cout << "Enter the first fraction:\n";
    fraction1.input();

    std::cout << "Enter the second fraction:\n";
    fraction2.input();

    std::cout << "Results:\n";

    Fraction sum = fraction1.add(fraction2);
    std::cout << "Sum: ";
    sum.output();

    Fraction difference = fraction1.subtract(fraction2);
    std::cout << "Subtract: ";
    difference.output();

    Fraction product = fraction1.multiply(fraction2);
    std::cout << "Multiply: ";
    product.output();

    Fraction quotient = fraction1.divide(fraction2);
    std::cout << "Divide: ";
    quotient.output();

    return 0;
}