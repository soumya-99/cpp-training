#include <iostream>

struct Address {
    std::string street;
    std::string city;
    std::string state;
    short zip;
};

struct Customer {
    int id;
    std::string name;
    Address address;
    std::string email;
};

int main(int argc, char const *argv[]) {
    
    Customer customer;
    std::cout << "Enter customer id: ";
    std::cin >> customer.id;
    std::cout << "Enter customer name: ";
    std::cin >> customer.name;
    std::cout << "Enter customer street: ";
    std::cin >> customer.address.street;
    std::cout << "Enter customer city: ";
    std::cin >> customer.address.city;
    std::cout << "Enter customer state: ";
    std::cin >> customer.address.state;
    std::cout << "Enter customer zip: ";
    std::cin >> customer.address.zip;
    std::cout << "Enter customer Email: ";
    std::cin >> customer.email;

    std::cout << "Customer id: " << customer.id << std::endl;
    std::cout << "Customer name: " << customer.name << std::endl;
    std::cout << "Customer email: " << customer.email << std::endl;
    std::cout << "Customer address: " << customer.address.street << ", " << customer.address.city << ", " << customer.address.state << ", " << customer.address.zip << std::endl;

    return 0;
}
