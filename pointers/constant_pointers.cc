#include <iostream>

int main(int argc, char const *argv[])
{
    // const int x = 10;
    // const int* ptr = &x;
    // *ptr = 20; // means chnage constant data x (not legal)

    // int x = 10;
    // int* const ptr = &x;
    // int y = 20;
    // ptr = &y; // means change in constant pointer (not legal)

    const int x = 10;
    const int* const ptr = &x;
    // int y = 20;
    // *ptr = 20; // change in constant data (not legal)
    // ptr = &y; // change in constant pointer (not legal)

    return 0;
}
