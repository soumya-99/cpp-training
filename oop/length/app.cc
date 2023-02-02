#include <iostream>

#include "Length.h"

using namespace std;

int main(int argc, char const* argv[]) {
    Length first{10};
    Length second{20};

    if (first < second) {
        cout << "First is smaller." << endl;
    } else if (first > second) {
        cout << "Second is smaller." << endl;
    } else {
        cout << "They are equal." << endl;
    }

    // if (first == second)
    // if (first == 10)
    // cout << (first == second) << endl;
    // cout << (first == 10) << endl;
    // cout << (second != 50) << endl;
    return 0;
}
