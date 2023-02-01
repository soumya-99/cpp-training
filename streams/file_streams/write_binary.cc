#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int numbers[] = {1'000'000, 2'000'000, 3'000'000};
    ofstream file("numbers.bin", ios::binary);

    if (file.is_open()) {
        file.write(reinterpret_cast<char*>(&numbers), sizeof(numbers));
        file.close();
    }
    return 0;
}
