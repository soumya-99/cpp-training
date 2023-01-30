// #ifdef UTILS_GREET
// #define UTILS_GREET

#include <iostream>

namespace utils {
  void greet(std::string name) {
    std::cout << "Hello " << name;
  }
}  // namespace utils

// #endif