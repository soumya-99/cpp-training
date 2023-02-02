#include "TextBox.h"

#include <iostream>

using namespace std;

string TextBox::get_value() {
    return value;
}

void TextBox::set_value(const string& value) {
    this->value = value;
}

TextBox::TextBox(bool enabled, const string& value) : Widget(enabled), value{value} {
}