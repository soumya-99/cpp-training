#include <iostream>

enum class Action {  // strongly typed enum
    List = 1,
    Add,
    Update,
};

int main(int argc, char const *argv[]) {
    std::cout << "1. List Invoices" << std::endl
              << "2. Add Invoice" << std::endl
              << "3. Update Invoice" << std::endl;

    short input;
    std::cin >> input;

    // casting to int/short because enum class is strongly typed
    if (input == static_cast<short>(Action::List))
        std::cout << "Listing invoices" << std::endl;
    else if (input == static_cast<short>(Action::Add))
        std::cout << "Adding invoice" << std::endl;
    else if (input == static_cast<short>(Action::Update))
        std::cout << "Updating invoice" << std::endl;
    else
        std::cout << "Invalid input" << std::endl;
    return 0;
}
