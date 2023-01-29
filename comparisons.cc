#include <iostream>

int main(int argc, char const *argv[])
{
    int x = 10;
    double y = 2;

    bool is_equal = x != y;
    std::cout << std::boolalpha << is_equal;
    return 0;
}
