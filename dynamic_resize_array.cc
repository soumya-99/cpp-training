#include <iostream>

int main(int argc, char const* argv[]) {
    const int CAPACITY = 5;
    int* numbers = new int[CAPACITY];
    int entries = 0;

    while (true) {
        std::cout << "Number: ";
        std::cin >> numbers[entries];

        if (std::cin.fail()) {
            break;
        }
        entries++;

        if (entries == CAPACITY) {
            int* temp = new int[entries * 2];
            for (int i = 0; i < entries; i++) {
                temp[i] = numbers[i];
            }
            // free the previous numbers array
            delete[] numbers;
            // numbers point to the new location temp (twice the size)
            numbers = temp;
        }
    }

    for (int i = 0; i < entries; i++) {
        std::cout << numbers[i] << std::endl;
    }

    delete[] numbers;

    return 0;
}
