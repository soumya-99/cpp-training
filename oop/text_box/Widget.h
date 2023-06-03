#ifndef WIDGET_H
#define WIDGET_H

#pragma once

class Widget {
   public:
    virtual ~Widget() = default;
    // adding =0 Pure virtual method: Now the whole class becomes abstract
    virtual void draw() const = 0;  // dynamic binding
    void enable();
    void disable();
    bool isEnabled() const;

   private:
    bool enabled;

   protected:
    int width;
};

#endif