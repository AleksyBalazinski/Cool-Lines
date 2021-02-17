#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <cassert>

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
    void printFraction() const;
    void fracPow(int n); // raises the fraction to a certain integer-type power
    friend Fraction operator+(const Fraction& a, const Fraction& b);
    friend Fraction operator-(const Fraction& a, const Fraction& b);
    friend Fraction operator*(const Fraction& a, const Fraction& b);
    friend Fraction operator/(const Fraction& a, const Fraction& b);
};


#endif //FRACTION_HPP