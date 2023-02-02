#include <iostream>

#include "Point.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Point p1 {10, 20};
    Point p2 {10, 30};

    p2 = ++p1;

    cout << p1 << ", " << p2 << endl;
    // cout << "Addition: " << (p1 + p2) << endl;
    return 0;
}
