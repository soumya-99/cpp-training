#include "Point.h"

Point::Point(int x, int y) : x {x}, y {y} {
}

Point::~Point() {
}

bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}
