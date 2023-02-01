#include <iostream>

#include "Rectangle.h"

using namespace std;

int main(int argc, char const* argv[]) {
    Rectangle rect;
    rect.width = 10;
    rect.height = 20;

    cout << "Area: " << rect.get_area() << endl;

    return 0;
}
