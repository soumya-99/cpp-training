#ifndef TEXTBOX_H
#define TEXTBOX_H

#pragma once

#include <string>

class TextBox {
   public:
    TextBox() = default;
    explicit TextBox(const std::string& value);
    std::string get_value();
    void set_value(const std::string& value);

   private:
    std::string value;
};

#endif