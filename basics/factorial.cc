#include <iostream>

int factorial(int n);

int main(int argc, char const *argv[]) {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << factorial(number);
    return 0;
}

int factorial(int n) {
    return n == 0 ? 1 : n * factorial(n - 1);
    // for (int i = n - 1; i > 0; i--)
    //     n *= i;
    // return n;
}