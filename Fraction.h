#pragma once
#include <iostream>


class Fraction {
private:
    int numerator;
    int denominator;

    // Function to reduce the fraction
    void reduce();

public:
    // Constructors
    Fraction();

    // Member functions
    void input();
    void output() const;

    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;
};