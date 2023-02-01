#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {
    ofstream file;
    file.open("mat.txt");
    if (file.is_open()) {
        int matrix[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                file << matrix[i][j] << ' ';
            }
            file << '\n';
        }
        // file << setw(20) << "Hello" << setw(20) << "World" << endl;
        file.close();
    }

    return 0;
}
