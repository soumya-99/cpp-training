#include <iostream>

int main(int argc, char const *argv[]) {
  // int x = 2;
  // double y = 3.2;
  // int z = x + static_cast<int>(y);

  // std::cout << z;

  int x = 10;
  int y = 3;
  double z = static_cast<double>(x) / y;

  std::cout << z;
  return 0;
}
