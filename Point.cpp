#include "Point.hpp"
#include <iostream>

Point operator+(const Point& a, const Point& b)
{
    return Point{a.m_x + b.m_x, a.m_y + b.m_y};
}

Point operator-(const Point& a, const Point& b)
{
    return Point{a.m_x - b.m_x, a.m_y - b.m_y};
}

void Point::printPoint() const
{
    std::cout << '(' << getX().getNumerator() << '/' << getX().getDenominator() << ", " 
        << getY().getNumerator() << '/' << getY().getDenominator() << ")";
}