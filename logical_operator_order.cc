#include <iostream>

int main(int argc, char const *argv[])
{
    // Order of logical operations
    // ()
    // 1. !
    // 2. &&
    // 3. ||

    bool a = true;
    bool b = false;
    bool c = false;

    bool result1 = a && b || c;
    bool result2 = a && (b || c);
    bool result3 = b && !a;

    std::cout << std::boolalpha << result1 << " " << result2 << " " << result3;
    return 0;
}
