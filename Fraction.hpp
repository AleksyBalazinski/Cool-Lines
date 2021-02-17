#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <cassert>
#include <iostream>

class Fraction
{
    private:
    int m_numerator = 0;
    int m_denominator = 1;

    public:
    Fraction() = default;
    Fraction(int n, int d) : m_numerator{n}, m_denominator{d} 
    {
        assert(d != 0);
        reduce();
    }
    void reduce();
    int getNumerator() const { return m_numerator; }
    int getDenominator() const { return m_denominator; }
    void printFraction() const; // deprecated
    void fracPow(int n); // raises the fraction to a certain integer-type power
    double toDouble() { return static_cast<double>(m_numerator) / m_denominator; }
    friend Fraction operator+(const Fraction& a, const Fraction& b);
    friend Fraction operator-(const Fraction& a, const Fraction& b);
    friend Fraction operator*(const Fraction& a, const Fraction& b);
    friend Fraction operator/(const Fraction& a, const Fraction& b);

    friend std::ostream& operator<< (std::ostream& out, const Fraction& frac);
};


#endif //FRACTION_HPP