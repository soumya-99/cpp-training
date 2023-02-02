#include <iostream>

#include "TextBox.h"
#include "Checkbox.h"

using namespace std;

void show_widget(const Widget& widget) {
    widget.draw();
}

int main(int argc, char const* argv[]) {
    TextBox box;
    show_widget(box);

    Checkbox check_box;
    show_widget(check_box);

    return 0;
}
