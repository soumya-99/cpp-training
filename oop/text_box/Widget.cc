#include "Widget.h"

Widget::Widget() {
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
