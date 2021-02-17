#ifndef POINT_HPP
#define POINT_HPP

#include "Fraction.hpp"

class Line;

class Point
{
    private:
    Fraction m_x;
    Fraction m_y;

    public:
    Point() = default;
    Point(Fraction x, Fraction y) : m_x{x}, m_y{y} {}
    Fraction getX() const { return m_x; }
    Fraction getY() const { return m_y; }
    void printPoint() const;
    friend Point operator+(const Point& a, const Point& b);
    friend Point operator-(const Point& a, const Point& b);
    friend Line;
};

#endif //POINT_HPP