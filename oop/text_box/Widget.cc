#include "Widget.h"

#include <iostream>

Widget::Widget(bool enabled) : enabled{enabled} {
    std::cout << "Widget Constructor" << std::endl;
}

Widget::~Widget() {
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
