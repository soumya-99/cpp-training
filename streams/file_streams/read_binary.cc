#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {
    ifstream file("numbers.bin");

    if (file.is_open()) {
        int number;
        while (file.read(reinterpret_cast<char*>(&number), sizeof(number)))
            cout << number << endl;
        file.close();
    }
    return 0;
}
