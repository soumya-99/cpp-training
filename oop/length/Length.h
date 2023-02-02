#ifndef LENGTH_H
#define LENGTH_H

#pragma once

#include <compare>
#include <ostream>
#include <istream>

class Length {
   public:
    explicit Length(int value);
    Length() = default;
    ~Length();

    bool operator==(const Length& other) const;
    bool operator==(int other) const;
    std::strong_ordering operator<=>(const Length& other) const;
    Length operator+(const Length& other) const;
    Length& operator+=(const Length& other);
    Length& operator++(); // prefix
    Length operator++(int); // postfix
    // operator int() const; // cast operator (implicit)
    explicit operator int() const; // cast operator (explicit)

    int get_value() const;
    void set_value(int value);

   private:
    int value;
    int x;
};

std::ostream& operator<<(std::ostream& stream, const Length& length);
std::istream& operator>>(std::istream& stream, Length& length);

#endif