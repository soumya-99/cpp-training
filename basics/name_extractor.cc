#include <iostream>
#include <memory>

int main(int argc, char const* argv[]) {
    std::string name = "Soumyadeep Mondal";
    std::string first_name = name.substr(0, name.find(' '));
    std::string last_name = name.substr(name.find(' ') + 1);

    std::cout << "First Name: " << first_name << std::endl;
    std::cout << "Last Name: " << last_name << std::endl;

    return 0;
}
