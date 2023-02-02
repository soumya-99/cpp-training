#include <iostream>

#include "TextBox.h"

using namespace std;

int main(int argc, char const* argv[]) {
    TextBox box;
    box.disable();

    cout << box.isEnabled() << endl;

    return 0;
}
