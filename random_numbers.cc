#include <cstdlib>
#include <ctime>
#include <iostream>

int main(int argc, char const *argv[]) {
    // long elapsed_seconds = time(nullptr);
    // srand(elapsed_seconds);
    // int number = std::rand() % 10;
    // std::cout << elapsed_seconds << std::endl;
    // std::cout << number;

    // Roll dieces
    const short max_value = 6;
    const short min_value = 1;

    srand(time(nullptr));
    int first = (std::rand() % (max_value - min_value + 1) + min_value);
    int second = (std::rand() % (max_value - min_value + 1) + min_value);

    std::cout << first << ", " << second;

    return 0;
}
