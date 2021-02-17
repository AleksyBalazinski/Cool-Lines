#include "Line.hpp"
#include <iostream>

Line::Line(const Point& a, const Point& b)
{
    m_m = (b.m_y - a.m_y) / (b.m_x - a.m_x);
    m_b = a.m_y - ((b.m_y - a.m_y) / (b.m_x - a.m_x)) * a.m_x;
}

void Line::printLine() const
{
    std::cout << "y = " << '(';
    m_m.printFraction();
    std::cout << ") * x + ";
    m_b.printFraction();
}