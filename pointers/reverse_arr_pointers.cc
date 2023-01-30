#include <iostream>

int main(int argc, char const* argv[]) {
    int arr[] = {10, 20, 30};
    int* ptr = &arr[std::size(arr) - 1];

    while (ptr >= arr) {
        std::cout << *ptr << " ";
        ptr--;
    }

    return 0;
}
