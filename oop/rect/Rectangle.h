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
    void draw();
    int get_area();
    int get_width();
    void set_width(int width);
    int get_height();
    void set_height(int height);

    static int get_objects_count();
};

#endif