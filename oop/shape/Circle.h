#ifndef CIRCLE_H
#define CIRCLE_H

#pragma once

#include "Shape.h"

class Circle : public Shape {
   public:
      void draw() const override;
   private:
};

#endif