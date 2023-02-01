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

int Rectangle::get_width() {
    return width;
}

void Rectangle::set_width(int width) {
    if (width < 0)
        throw invalid_argument("width");
    this->width = width;
}

int Rectangle::get_height() {
    return height;
}

void Rectangle::set_height(int height) {
    if (height < 0)
        throw invalid_argument("height");
    this->height = height;
}