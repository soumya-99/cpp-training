#ifndef LENGTH_H
#define LENGTH_H

#pragma once

class Length {
   public:
    explicit Length(int value);
    ~Length();

    bool operator==(const Length& other) const;
    bool operator==(int other) const;

   private:
    int value;
};

#endif