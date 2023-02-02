#ifndef LENGTH_H
#define LENGTH_H

#pragma once

#include <compare>
#include <ostream>
#include <istream>

class Length {
   public:
    explicit Length(int value);
    ~Length();

    bool operator==(const Length& other) const;
    bool operator==(int other) const;
    std::strong_ordering operator<=>(const Length& other) const;

    int get_value() const;
    void set_value(int value);

   private:
    int value;
};

std::ostream& operator<<(std::ostream& stream, const Length& length);
std::istream& operator>>(std::istream& stream, Length& length);

#endif