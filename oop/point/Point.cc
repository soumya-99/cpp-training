#include "Point.h"

Point::Point(int x, int y) : x{x}, y{y} {
}

Point::~Point() {
}

bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}

int Point::get_x() const {
    return x;
}

void Point::set_x(int x) {
    this->x = x;
}

int Point::get_y() const {
    return y;
}

void Point::set_y(int y) {
    this->y = y;
}

std::ostream& operator<<(std::ostream& stream, const Point& point) {
    return stream << "(" << point.get_x() << ", " << point.get_y() << ")";
}