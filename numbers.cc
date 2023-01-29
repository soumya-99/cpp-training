#include <iostream>

int main(int argc, char const *argv[])
{
    // binary number
    int bin_number = 0b11111111; // 255
    std::cout << bin_number << std::endl;

    // hexadecimal number
    int hex_number = 0xFF; // 255
    std::cout << hex_number << std::endl;

    unsigned int number = -255; // garbage
    std::cout << number << std::endl;

    return 0;
}
