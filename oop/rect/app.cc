#include <iostream>
#include <memory>

#include "Rectangle.h"

using namespace std;

void show_rectangle(Rectangle& rect) {
}

int main(int argc, char const* argv[]) {
    Rectangle rects[] = {
        {},
        {10, 20},
        {35, 41, "red"},
    };

    for (auto& rect : rects) {
        rect.draw();
        cout << "Area: " << rect.get_area() << endl;
        cout << "Width: " << rect.get_width() << endl;
        cout << "Height: " << rect.get_height() << endl;
        cout << endl;
    }

    return 0;
}
