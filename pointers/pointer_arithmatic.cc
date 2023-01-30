#include <iostream>

int main(int argc, char const* argv[]) {
    int arr[] = {10, 20, 30};
    int* ptr = arr;

    // every index is 4 byte.
    // addr -> 100 ++ 104 ++ 108 ++ ...
    // ptr++;
    std::cout << *(++ptr) << std::endl;
    ptr--;
    std::cout << *ptr;

    return 0;
}
