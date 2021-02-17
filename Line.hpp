#ifndef LINE_HPP
#define LINE_HPP

#include "Fraction.hpp"
#include "Point.hpp"

class Line
{
    private:
    Fraction m_m {0, 1};
    Fraction m_b {0, 1};

    public:
    Line() = default;
    Line(const Fraction& m, const Fraction& b) : m_m{m}, m_b{b} {}
    Line(const Point& a, const Point& b);
    Fraction getM() const { return m_m; }
    Fraction getB() const { return m_b; }
    void printLine() const;
};

#endif //LINE_HPP