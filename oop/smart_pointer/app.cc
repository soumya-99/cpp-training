#include <iostream>

#include "SmartPointer.h"

using namespace std;

int main(int argc, char const* argv[]) {
    SmartPointer sptr {new int};

    *sptr = 10;
    cout << *sptr << endl;
    *sptr = 20;
    cout << *sptr << endl;

    return 0;
}
