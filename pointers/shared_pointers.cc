#include <iostream>
#include <memory>

int main(int argc, char const* argv[]) {
    // shared_ptr
    auto x = std::make_shared<int>();
    *x = 5;

    std::shared_ptr<int> y(x);
    std::cout << *y << std::endl;
    std::cout << *x;

    return 0;
}
