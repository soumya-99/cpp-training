#include <iostream>

#include "Length.h"

using namespace std;

int main(int argc, char const* argv[]) {
    Length first{10};

    int x = static_cast<int>(first);

    cout << first << endl;

    return 0;
}
