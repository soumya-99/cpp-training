#ifndef ARRAY_H
#define ARRAY_H

#pragma once

#include <cstddef>

class Array {
   public:
    explicit Array(size_t size);
    ~Array();

    int length() const;

    int& operator[](size_t index);

   private:
    int* data;
    size_t size;
};

#endif