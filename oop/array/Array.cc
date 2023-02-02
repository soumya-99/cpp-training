#include "Array.h"
#include <stdexcept>

Array::Array(size_t size) {
    data = new int[size];
    this->size = size;
}

Array::~Array() {
    delete[] data;
    data = nullptr;
}

int Array::length() const {
    return size;
}

int& Array::operator[](size_t index) {
    if (index >= size)
        throw std::invalid_argument("index.");
    return data[index];
}
