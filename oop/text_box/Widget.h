#ifndef WIDGET_H
#define WIDGET_H

#pragma once

class Widget {
   public:
    virtual ~Widget() = default;
    virtual void draw() const;  // dynamic binding
    void enable();
    void disable();
    bool isEnabled() const;

   private:
    bool enabled;

   protected:
    int width;
};

#endif