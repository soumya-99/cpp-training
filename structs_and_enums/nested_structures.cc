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

    bool equals(const Movie& movie) {
        return title == movie.title && release_date.year == movie.release_date.year && release_date.month == movie.release_date.month && release_date.day == movie.release_date.day;
    }
};

int main(int argc, char const* argv[]) {
    std::vector<Movie> movies;

    movies.push_back({"The Revenant", {2015, 12, 25}});
    movies.push_back({"The Revenant", {2015, 12, 25}});
    movies.push_back({"Pather Panchali", {1955, 8, 19}});

    for (const auto& movie : movies) {
        std::cout << movie.title << " (" << movie.release_date.year << ")" << std::endl;
    }

    std::cout << movies[0].equals(movies[1]) << std::endl;

    return 0;
}
