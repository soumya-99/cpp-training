#include <iostream>
#include <memory>

int main() {
    // if (__cplusplus == 201703L)
    //     std::cout << "C++17" << std::endl;
    // else if (__cplusplus == 201402L)
    //     std::cout << "C++14" << std::endl;
    // else if (__cplusplus == 201103L)
    //     std::cout << "C++11" << std::endl;
    // else if (__cplusplus == 199711L)
    //     std::cout << "C++98" << std::endl;
    // else
    //     std::cout << "pre-standard C++" << std::endl;
    std::cout << __cplusplus << std::endl;
    std::string s = "Hello";
    std::cout << s << std::endl;
    std::cout << s.starts_with("H") << std::endl;

    auto arr = std::make_unique<int>(5);

    return 0;

}
