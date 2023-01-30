#include <iostream>
#include <memory>

int main(int argc, char const* argv[]) {
    // int* x = new int;
    // delete x;
    // delete x; // double free error
    // that's why we need smart pointers

    // unique_ptr
    std::unique_ptr<int> x(new int);
    *x = 5;
    std::cout << *x << std::endl;

    auto y = std::make_unique<int>();
    *y = 10;
    std::cout << *y << std::endl;

    auto numbers = std::make_unique<int[]>(5);
    numbers[0] = 10;
    numbers[1] = 20;
    std::cout << "[" << numbers[0] << ", " << numbers[1] << "]" << std::endl;

    return 0;
}
