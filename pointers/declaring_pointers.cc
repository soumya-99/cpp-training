#include <iostream>

int main(int argc, char const* argv[]) {
    int num = 10;
    std::cout << &num << std::endl;

    // pointer variable & -> address-of operator
    int* ptr = &num;
    // indirection / de-referencing operator
    std::cout << *ptr << std::endl;

    *ptr = 20;
    std::cout << num;

    return 0;
}
