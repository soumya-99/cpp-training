#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter 2 numbers: ";
    double x, y;
    std::cin >> x >> y;
    std::cout << "Enter an operation: " << std::endl
              << "1. +\n"
              << "2. -\n"
              << "3. *\n"
              << "4. /\n";
    short operation;
    std::cin >> operation;

    switch (operation)
    {
    case 1:
        std::cout << x + y;
        break;
    case 2:
        std::cout << x - y;
        break;
    case 3:
        std::cout << x * y;
        break;
    case 4:
        std::cout << x / y;
        break;
    default:
        std::cout << "Invalid operation";
        break;
    }
    return 0;
}
