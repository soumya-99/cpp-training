#include <fstream>
#include <iostream>

using namespace std;

struct Movie {
    int id;
    string title;
    int year;
};

int main(int argc, char const *argv[]) {
    ifstream file;
    file.open("data.csv");

    if (file.is_open()) {
        string str;
        getline(file, str);
        
        while (!file.eof()) {
            getline(file, str, ',');
            if (str.empty()) break;

            Movie movie;
            movie.id = stoi(str);
            getline(file, str, ',');

            movie.title = str;
            getline(file, str);

            movie.year = stoi(str);
            cout << movie.title << endl;
        }
        file.close();
    }

    return 0;
}
