#include <iostream>
#include <vector>
#include <memory>
#include "TextBox.h"
#include "Checkbox.h"

using namespace std;

void show_widget(const Widget& widget) {
    widget.draw();
}

int main(int argc, char const* argv[]) {
    // static or early binding
    // dynamic or late binding
    vector<unique_ptr<Widget>> widgets;
    widgets.push_back(make_unique<TextBox>());
    widgets.push_back(make_unique<Checkbox>());

    for (const auto& widget : widgets) {
        widget->draw();
    }

    return 0;
}
