#include <iostream>

#include "TextBox.h"

using namespace std;

void show_widget(const Widget& widget) {
    widget.draw();
}

int main(int argc, char const* argv[]) {
    TextBox box;
    show_widget(box);

    return 0;
}
