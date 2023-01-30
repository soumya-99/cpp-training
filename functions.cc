#include <iostream>

using namespace std;

string full_name(string first, string last) { return first + " " + last; }

int find_max(int num1, int num2) { return num1 > num2 ? num1 : num2; }

// passing by reference (changes throughout the program)
void increase_price(double& price) { price *= 1.5; }

void greet(const string& name) { cout << "Hello " << name; }

int main(int argc, char const* argv[]) {
  // string name = full_name("Soumyadeep", "Mondal");
  // cout << name;

  // int max = find_max(10, 20);
  // cout << max;

  //   double price = 100;
  //   increase_price(price);
  //   cout << price;

  string name = "Soumyadeep";
  greet(name);

  return 0;
}
