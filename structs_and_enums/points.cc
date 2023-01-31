#include <iostream>

struct Point {
    int x;
    int y;
};

bool operator==(const Point& first, const Point& second) {
    return first.x == second.x && first.y == second.y;
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

int main(int argc, char const* argv[]) {
    Point point1 = {2, 3};

    Point point2 = {2, 3};

    std::cout << point1 << " and " << point2 << std::endl;
    std::cout << (point1 == point2);
    return 0;
}
