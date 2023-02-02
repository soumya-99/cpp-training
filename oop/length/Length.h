#ifndef LENGTH_H
#define LENGTH_H

#pragma once

#include <compare>

class Length {
   public:
    explicit Length(int value);
    ~Length();

    bool operator==(const Length& other) const;
    bool operator==(int other) const;

    std::strong_ordering operator<=>(const Length& other) const;

   private:
    int value;
};

#endif