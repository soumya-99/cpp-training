#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    fstream file;
    file.open("file.txt", ios::in | ios::out | ios::binary | ios::app);

    if (file.is_open()) {
        file << "Hello World" << endl;
        file.close();
    }
    
    return 0;
}
