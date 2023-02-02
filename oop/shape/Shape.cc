#include "Shape.h"

Shape::Shape()
{

}

Shape::~Shape()
{

}

std::string Shape::get_background() const {
    return background;
}

void Shape::set_background(const std::string& background) {
    this->background = background;
}
