#include <iostream>
#include <cstdlib> // for system();
#include "Fraction.hpp"
#include "Point.hpp"
#include "Line.hpp"

int main()
{
    std::cout << "Finds line equation passing through two points\n";

    int n, d;
    std::cout << "Enter the x coordinate of the first point\n(numerator and denominator comma separated): ";
    std::cin >> n >> d;
    Fraction a_x {n, d};

    std::cout << "\nEnter the y coordinate of the first point\n(numerator and denominator comma separated): ";
    std::cin >> n >> d;
    Fraction a_y {n, d};

    std::cout << "\nEnter the x coordinate of the second point\n(numerator and denominator comma separated): ";
    std::cin >> n >> d;
    Fraction b_x {n, d};

    std::cout << "\nEnter the y coordinate of the second point\n(numerator and denominator comma separated): ";
    std::cin >> n >> d;
    Fraction b_y {n, d};

    Point p1 {a_x, a_y};
    Point p2 {b_x, b_y};

    Line l {p1, p2};
    
    std::cout << "Equation of a line passing through " << p1 << " and " << p2 << " is\n";
        l.printLine(); std::cout << '\n';

    //system("pause");
}