#include "Rectangle.h"

#include <iostream>

using namespace std;

void Rectangle::draw() const {
    cout << "Drawing a rectangle..." << endl;
    cout << "Dimensions: " << width << "x" << height << endl;
}

int Rectangle::get_area() const {
    return width * height;
}

int Rectangle::get_width() const {
    return width;
}

void Rectangle::set_width(int width) {
    if (width < 0)
        throw invalid_argument("width");
    this->width = width;
}

int Rectangle::get_height() const {
    return height;
}

void Rectangle::set_height(int height) {
    if (height < 0)
        throw invalid_argument("height");
    this->height = height;
}

Rectangle::Rectangle(int width, int height) {
    objects_count++;
    cout << "Rectangle constructor called..." << endl;
    set_width(width);
    set_height(height);
}

// Rectangle::Rectangle(int width, int height, const string& color) : Rectangle(width, height) {
//     cout << "Constructing rect with color." << endl;
//     this->color = color;
// }

Rectangle::~Rectangle() {
    cout << "Rectangle Destructor called..." << endl;
}

int Rectangle::objects_count = 0;

int Rectangle::get_objects_count() {
    return objects_count;
}