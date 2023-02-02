#include "TextBox.h"

#include <iostream>

using namespace std;

TextBox::~TextBox() {
    cout << "TextBox destructor" << endl;
}

void TextBox::draw() const {
    cout << "Drawing a text box" << endl;
}

string TextBox::get_value() {
    return value;
}

void TextBox::set_value(const string& value) {
    this->value = value;
}
