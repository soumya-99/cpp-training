#include <iostream>

#include "Rectangle.h"

using namespace std;

int main(int argc, char const* argv[]) {
    Rectangle default_rect;
    Rectangle rect {10, 20};
    cout << rect.get_width() << endl;

    return 0;
}
