#ifndef RECTANGLE_H
#define RECTANGLE_H

#pragma once

#include <string>

class Rectangle {
   private:
    int width;
    int height;
    std::string color;

   public:
    Rectangle() = default;
    Rectangle(int width, int height);
    Rectangle(int width, int height, const std::string& color);
    void draw();
    int get_area();
    int get_width();
    void set_width(int width);
    int get_height();
    void set_height(int height);
};

#endif