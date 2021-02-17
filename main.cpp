#include <iostream>
#include <cassert>
#include <cstdlib> // for system();
#include "Fraction.hpp"
#include "Point.hpp"
#include "Line.hpp"

int main()
{
    // test 1
    Fraction frac{Fraction{3, 5} * Fraction{7, 8} + Fraction{5, 9}};
    frac.fracPow(2);
    frac.printFraction();
    std::cout << '\n';

    // test 2
    Point p1 {Fraction{1, 2}, Fraction{-2, 3}};
    Point p2 {Fraction{511, 21}, Fraction{3, 7}};
    Point sum = p1 + p2;
    sum.printPoint();
    std::cout << '\n';
    //test 3

    Line l {p1, p2};
    l.printLine();
    std::cout << '\n';

    system("pause");
}