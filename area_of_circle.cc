#include <cmath>
#include <iostream>

#define PI 3.14159

int main(int argc, char const *argv[]) {
  double radius;
  std::cout << "Enter the Radius of the Circle: ";
  std::cin >> radius;

  double area = PI * pow(radius, 2);

  std::cout << "Area of the circle: " << area << std::endl;

  return 0;
}
