#include <iostream>
#include "Array.h"

using namespace std;

int main(int argc, char const* argv[]) {
    Array arr {10};
    for (int i = 0; i < arr.length(); i++) {
        arr[i] = i;
    }

    for (int i = 0; i < arr.length(); i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
