#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    ofstream file;
    file.open("data.csv");
    if (file.is_open()) {
        // CSV: Comma Separated Values
        file << "id,title,year\n"
             << "1,The Shawshank Redemption,1994\n"
             << "2,The Godfather,1972\n";
        // file << setw(20) << "Hello" << setw(20) << "World" << endl;
        file.close();
    }

    return 0;
}
