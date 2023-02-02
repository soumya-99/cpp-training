#include "Length.h"

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
    length.x; // can access because of friend declaration
    return stream;
}

std::istream& operator>>(std::istream& stream, Length& length) {
    int value;
    stream >> value;
    length.set_value(value);
    return stream;
}
