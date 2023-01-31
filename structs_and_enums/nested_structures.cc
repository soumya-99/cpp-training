#include <iostream>
#include <vector>

struct Date {
    int year;
    int month;
    int day;
};

struct Movie {
    std::string title;
    Date release_date;
    bool is_popular = true;
};

int main(int argc, char const* argv[]) {
    std::vector<Movie> movies;

    movies.push_back({"The Revenant", {2015, 12, 25}});
    movies.push_back({"Pather Panchali", {1955, 8, 19}});

    for (const auto& movie : movies) {
        std::cout << movie.title << " (" << movie.release_date.year << ")" << std::endl;
    }

    return 0;
}
