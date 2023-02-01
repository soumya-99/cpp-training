#include <iostream>

#include "TextBox.h"

using namespace std;

int main(int argc, char const *argv[]) {
    TextBox box;
    box.set_value("Hello Soumyadeep!");

    cout << box.get_value() << endl;
    return 0;
}
