#include <iostream>

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main(int argc, char const *argv[]) {
    int x = 10;
    int y = 20;
    swap(&x, &y);
    std::cout << x << ", " << y;
    return 0;
}
