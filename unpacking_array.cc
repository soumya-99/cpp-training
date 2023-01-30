#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char const *argv[]) {
    int arr[] = {1, 2, 3};
    auto [a, b, c] = arr;

    cout << a << endl
         << b << endl
         << c << endl;
    return 0;
}
