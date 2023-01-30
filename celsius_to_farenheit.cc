#include <iostream>

int main(int argc, char const *argv[]) {
    double farenheit;
    std::cout << "Enter temparature in FARENHEIT: ";
    std::cin >> farenheit;

    double celsius = ((farenheit - 32) * 5) / 9;

    std::cout << "In Celsius: " << celsius << std::endl;

    return 0;
}
