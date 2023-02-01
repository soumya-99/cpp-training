#include <iostream>

#include "Rectangle.h"

using namespace std;

int main(int argc, char const* argv[]) {
    // Rectangle rect;
    // rect.width = 10;
    // rect.height = 20;

    // cout << "Area: " << rect.get_area() << endl;

    Rectangle rect1, rect2;

    // cout << &rect1 << endl << &rect2 << endl;
    rect1.set_width(-2); // throws exception

    return 0;
}
