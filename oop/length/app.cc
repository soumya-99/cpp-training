#include <iostream>

#include "Length.h"

using namespace std;

int main(int argc, char const* argv[]) {
    Length first {10};
    // Length second = ++first;
    Length second = first++;

    cout << first << ", " << second << endl;

    return 0;
}
