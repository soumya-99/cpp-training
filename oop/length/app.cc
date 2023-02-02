#include <iostream>

#include "Length.h"

using namespace std;

int main(int argc, char const* argv[]) {
    Length first {12};
    Length second {25};

    cout << (first + second) << endl;

    return 0;
}
