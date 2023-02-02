#include <iostream>

#include "TextBox.h"

using namespace std;

void show_widget(Widget& w) {
    w.disable();
}

int main(int argc, char const* argv[]) {
    TextBox box;
    show_widget(box);

    return 0;
}
