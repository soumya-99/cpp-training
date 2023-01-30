#include <iostream>

int main(int argc, char const* argv[]) {
    // Heap (free store)
    int* numbers = new int[10];
    // free the memory
    delete[] numbers;
    numbers = nullptr;  // reset the pointer

    int* number = new int;
    // free the memory
    delete number;
    number = nullptr;  // reset the pointer

    return 0;
}
