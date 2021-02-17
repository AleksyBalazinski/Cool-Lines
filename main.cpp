#include <iostream>
#include <cstdlib> // for system();
#include "Fraction.hpp"
#include "Point.hpp"
#include "Line.hpp"

int main()
{
    std::cout << "Number of lines (1 / 2): ";
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
    }

    system("pause");
}