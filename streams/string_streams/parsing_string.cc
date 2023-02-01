#include <iostream>
#include <sstream>

using namespace std;

struct Movie {
    string title;
    int year;
};

Movie parse_movie(string& str) {
    stringstream ss(str);
    Movie movie;
    getline(ss, movie.title, ',');
    ss >> movie.year;
    return movie;
}

int main(int argc, char const* argv[]) {
    string str = "The Matrix,1999";
    auto movie = parse_movie(str);
    cout << movie.title << " " << movie.year << endl;
    return 0;
}
