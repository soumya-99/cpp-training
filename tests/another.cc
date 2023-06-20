#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

int main() {
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // cube every elemennt with lambda
    for_each(arr.begin(), arr.end(), [](int a) {
        cout << a * a * a << " ";
    });

    // [](int a) -> int {
    //     return a * a * a;
    // };
    return 0;
}
