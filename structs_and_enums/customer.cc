#include <iostream>

struct Customer {
    int id;
    std::string name;
    std::string email;
};

int main(int argc, char const *argv[]) {
    
    Customer customer;
    std::cout << "Enter customer id: ";
    std::cin >> customer.id;
    std::cout << "Enter customer name: ";
    std::cin >> customer.name;
    std::cout << "Enter customer Email: ";
    std::cin >> customer.email;

    std::cout << "Customer id: " << customer.id << std::endl;
    std::cout << "Customer name: " << customer.name << std::endl;
    std::cout << "Customer email: " << customer.email << std::endl;

    return 0;
}
