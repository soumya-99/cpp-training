#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
  int num = 0;
//   while (num < 1 or num > 5) {
//     cout << "Your Number: ";
//     cin >> num;
//     if (num < 1 or num > 5) cout << "Enter a number between 1 to 5." << endl;
//   }

  while (true) {
    cout << "Your Number: ";
    cin >> num;
    if (num >= 1 and num <= 5) break;
    cout << "Enter a number between 1 to 5." << endl;
  }
  return 0;
}
