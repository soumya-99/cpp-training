#include <iostream>
#include <memory>

#include "Rectangle.h"

using namespace std;

void show_rectangle(Rectangle& rect) {
}

int main(int argc, char const* argv[]) {
    // auto* rect = new Rectangle(10, 20);
    auto rect = make_unique<Rectangle>(10, 20);
    
    rect->draw();

    cout << Rectangle::get_objects_count() << endl;

    return 0;
}
