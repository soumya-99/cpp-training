#ifndef POINT_H
#define POINT_H

#pragma once

#include <ostream>

class Point {
   public:
    explicit Point(int x, int y);
    ~Point();

    bool operator==(const Point& other) const;

    int get_x() const;
    void set_x(int x);
    int get_y() const;
    void set_y(int y);

   private:
    int x;
    int y;
};

std::ostream& operator<<(std::ostream& stream, const Point& point);

#endif