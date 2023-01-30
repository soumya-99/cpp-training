#include <iostream>

int main(int argc, char const *argv[]) {
    std::string s = "123.45";
    double x = std::stod(s);
    std::cout << x << std::endl;

    std::string num = std::to_string(54.571);
    std::cout << num << std::endl;

    return 0;
}
