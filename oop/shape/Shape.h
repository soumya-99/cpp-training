#ifndef SHAPE_H
#define SHAPE_H

#pragma once

#include <string>

class Shape {
   public:
    virtual void draw() const;
    std::string get_background() const;
    void set_background(const std::string& background);

   private:
    std::string background;
};

#endif