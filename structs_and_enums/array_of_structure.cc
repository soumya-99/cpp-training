#include <iostream>
#include <vector>

struct Movie {
    std::string title;
    int release_year;
    bool is_popular = true;
};

int main(int argc, char const* argv[]) {
    std::vector<Movie> movies;

    movies.push_back({"The Revenant", 2015});
    movies.push_back({"Pather Panchali", 1955});

    for (const auto& movie : movies) {
        std::cout << movie.title << " (" << movie.release_year << ")" << std::endl;
    }

    return 0;
}
