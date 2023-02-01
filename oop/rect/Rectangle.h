#ifndef RECTANGLE_H
#define RECTANGLE_H

#pragma once

class Rectangle {
   private:
    int width;
    int height;

   public:
    void draw();
    int get_area();
    int get_width();
    void set_width(int width);
    int get_height();
    void set_height(int height);
};

#endif