#ifndef POINT_H
#define POINT_H

#pragma once

class Point {
   public:
    explicit Point(int x, int y);
    ~Point();

    bool operator==(const Point& other) const;

   private:
    int x;
    int y;
};

#endif