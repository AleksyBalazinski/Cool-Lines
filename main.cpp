#include <iostream>
#include <cstdlib> // for system();
#include "Fraction.hpp"
#include "Point.hpp"
#include "Line.hpp"

int main()
{
    /*std::cout << "Number of lines (1 / 2): ";
    int choice;
    std::cin >> choice;
    if(choice == 1)
    {
        Line l0 = getLine();
        std::cout << "l:\n";
        l0.printLine(); std::cout << '\n';
    }
    else if(choice == 2)
    {
        Line l1 = getLine();
        std::cout << "l1:\n";
        l1.printLine(); std::cout << '\n';

        Line l2 = getLine();
        std::cout << "l2:\n";
        l2.printLine(); std::cout << '\n';

        
        std::cout << "Angle bt. these lines: " << angleBtLines(l1, l2) << '\n';
        std::cout << "Tan of the angle: " << tanOfAngleBtLines(l1, l2) << '\n';
    }*/

    Line l1{Point{Fraction{5, 2}, Fraction{3, 2}},Point{Fraction{3,9}, Fraction{7,19}}};
    Line l2{Point{Fraction{6, 5}, Fraction{3, 19}},Point{Fraction{11,3}, Fraction{5,8}}};

    l1.printLine(); std::cout << '\n'; //ok
    l2.printLine(); std::cout << '\n'; //ok

    

    std::cout << "Tan of the angle: " << tanOfAngleBtLines(l1, l2) << '\n';
    std::cout << "Angle bt. these lines: " << angleBtLines(l1, l2) << '\n';
    //system("pause");
}