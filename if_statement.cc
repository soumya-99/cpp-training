#include <iostream>

int main(int argc, char const *argv[]) {
  double sales = 12000;

  if (sales <= 10000)
    std::cout << 0.1 * sales;
  else if (sales > 10000 or sales <= 15000)
    std::cout << 0.15 * sales;
  else
    std::cout << 0.2 * sales;

  return 0;
}
