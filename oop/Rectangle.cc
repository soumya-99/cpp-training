#include "Rectangle.h"

#include <iostream>

using namespace std;

void Rectangle::draw() {
    cout << "Drawing a rectangle..." << endl;
    cout << "Dimensions: " << width << "x" << height << endl;
}

int Rectangle::get_area() {
    return width * height;
}