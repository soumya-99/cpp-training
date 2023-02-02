#ifndef WIDGET_H
#define WIDGET_H

#pragma once

class Widget {
   public:
    void enable();
    void disable();
    bool isEnabled() const;

   private:
    bool enabled;

   protected:
    int width;
};

#endif