#include "Line.hpp"
#include <iostream>
#include <cmath>

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

Line getLine()
{
    std::cout << "Enter the x coordinate of the first point\n(numerator and denominator comma separated): ";
    Fraction a_x; std::cin >> a_x;

    std::cout << "\nEnter the y coordinate of the first point\n(numerator and denominator comma separated): ";
    Fraction a_y; std::cin >> a_y;

    std::cout << "\nEnter the x coordinate of the second point\n(numerator and denominator comma separated): ";
    Fraction b_x; std::cin >> b_x;

    std::cout << "\nEnter the y coordinate of the second point\n(numerator and denominator comma separated): ";
    Fraction b_y; std::cin >> b_y;

    Point p1 {a_x, a_y}; Point p2 {b_x, b_y};

    std::cout << "\nThis line passes through " << p1 << " and " << p2 << '\n';

    return Line {p1, p2};
}

Fraction tanOfAngleBtLines(const Line& l1, const Line& l2)
{
    /*Fraction one {1,1};
    std::cout << '\t' << l1.getM() - l2.getM() << '\n';
    std::cout << '\t' << one + l1.getM() * l2.getM() << '\n';
    std::cout << '\t' << (l1.getM() - l2.getM()) / (one + l1.getM() * l2.getM()) << '\n';*/
    return (l1.getM() - l2.getM()) / (Fraction {1, 1} + l1.getM() * l2.getM());
}

double angleBtLines(const Line& l1, const Line& l2)
{
    Fraction temp = tanOfAngleBtLines(l1, l2);
    double res = std::atan(temp.toDouble());
    return res;
}