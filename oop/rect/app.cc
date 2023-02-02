#include <iostream>

#include "Rectangle.h"

using namespace std;

void show_rectangle(Rectangle& rect) {
}

int main(int argc, char const* argv[]) {
    const Rectangle rect1;
    rect1.draw();

    cout << Rectangle::get_objects_count() << endl;

    return 0;
}
