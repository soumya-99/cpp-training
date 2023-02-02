#include "Widget.h"

#include <iostream>

void Widget::draw() const {
    std::cout << "Drawing a widget" << std::endl;
}

void Widget::enable() {
    enabled = true;
}

void Widget::disable() {
    enabled = false;
}

bool Widget::isEnabled() const {
    return enabled;
}
