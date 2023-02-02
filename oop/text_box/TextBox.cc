#include "TextBox.h"

#include <iostream>

using namespace std;

void TextBox::draw() const {
    std::cout << "Drawing a text box" << std::endl;
}

string TextBox::get_value() {
    return value;
}

void TextBox::set_value(const string& value) {
    this->value = value;
}
