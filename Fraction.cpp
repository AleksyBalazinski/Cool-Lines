#include "Fraction.hpp"
#include "mathUtils.hpp"
#include <iostream>

void Fraction::reduce()
{
    int q = mathUtils::gcd(m_numerator, m_denominator);
    m_numerator /= q;
    m_denominator /= q;
}

void Fraction::printFraction() const
{
    std::cout << m_numerator << '/' << m_denominator;
}

void Fraction::fracPow(int n)
{
    m_numerator = mathUtils::powInt(m_numerator, n);
    m_denominator = mathUtils::powInt(m_denominator, n);
}

Fraction operator+(const Fraction& a, const Fraction& b)
{
    Fraction temp;
    temp.m_denominator = a.m_denominator * b.m_denominator;
    temp.m_numerator = a.m_numerator * b.m_denominator + a.m_denominator * b.m_numerator;
    temp.reduce();
    return temp;
}

Fraction operator-(const Fraction& a, const Fraction& b)
{
    Fraction temp;
    temp.m_denominator = a.m_denominator * b.m_denominator;
    temp.m_numerator = a.m_numerator * b.m_denominator - a.m_denominator * b.m_numerator;
    temp.reduce();
    return temp;
}

Fraction operator*(const Fraction& a, const Fraction& b)
{
    Fraction temp;
    temp.m_numerator = a.m_numerator * b.m_numerator;
    temp.m_denominator = a.m_denominator * b.m_denominator;
    temp.reduce();
    return temp;
}

Fraction operator/(const Fraction& a, const Fraction& b)
{
    Fraction temp;
    temp.m_numerator = a.m_numerator * b.m_denominator;
    temp.m_denominator = a.m_denominator * b.m_numerator;
    temp.reduce();
    return temp;
}

std::ostream& operator<<(std::ostream& out, const Fraction& frac)
{
    //std::cout << m_numerator << '/' << m_denominator;
    out << frac.m_numerator << '/' << frac.m_denominator;
    return out;
}