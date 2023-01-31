#include <iostream>

int main(int argc, char const *argv[]) {
    std::string s = R"(Hello '";s;asp84398' World)";
    std::cout << s << std::endl;
    return 0;
}
