#include "Shape.h"
#include <iostream>

void Shape::draw() const {
}

std::string Shape::get_background() const {
    return background;
}

void Shape::set_background(const std::string& background) {
    this->background = background;
}
