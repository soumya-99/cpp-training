#include <iostream>
#include <future>
#include <thread>

struct Movie {
    std::string title;
    int release_year;
    bool is_popular = true;
};

int main(int argc, char const *argv[]) {
    Movie movie;
    movie.title = "The Godfather";
    movie.release_year = 1972;

    // unpacking
    auto [title, release_year, is_popular] { movie };

    std::cout << movie.title << " (" << movie.release_year << ")" << std::endl;

    return 0;
}
