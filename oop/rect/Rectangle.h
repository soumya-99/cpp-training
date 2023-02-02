#ifndef RECTANGLE_H
#define RECTANGLE_H

#pragma once

#include <string>

class Rectangle {
   private:
    int width;
    int height;
    std::string color;
    
    static int objects_count;

   public:
    Rectangle() = default;
    Rectangle(const Rectangle& source) = delete;
    Rectangle(int width, int height);
    // Rectangle(int width, int height, const std::string& color);
    ~Rectangle();

    void draw() const;
    int get_area() const;
    int get_width() const;
    int get_height() const;

    void set_width(int width);
    void set_height(int height);

    static int get_objects_count();
};

#endif