#include "Length.h"
#include <iostream>

Length::Length(int value) : value{value} {
}

Length::~Length() {
}

bool Length::operator==(const Length& other) const {
    return value == other.value;
}

bool Length::operator==(int other) const {
    return value == other;
}

Length Length::operator+(const Length& other) const {
    return Length{value + other.value};
}

Length& Length::operator+=(const Length& other) {
    value += other.value;
    return *this;
}

Length& Length::operator++() { // [prefix]
    value++;
    return *this;
}

Length Length::operator++(int) { // [postfix]
    Length copy = *this;
    operator++();
    return copy;
}

Length::operator int() const {
    return value;
}

int Length::get_value() const {
    return value;
}

void Length::set_value(int value) {
    this->value = value;
}

std::strong_ordering Length::operator<=>(const Length& other) const {
    return value <=> other.value;
}

std::ostream& operator<<(std::ostream& stream, const Length& length) {
    stream << length.get_value();
    return stream;
}

std::istream& operator>>(std::istream& stream, Length& length) {
    int value;
    stream >> value;
    length.set_value(value);
    return stream;
}
