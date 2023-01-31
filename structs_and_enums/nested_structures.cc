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

bool operator==(const Movie& first, const Movie& second) {
    return first.title == second.title &&
           first.release_date.year == second.release_date.year &&
           first.release_date.month == second.release_date.month &&
           first.release_date.day == second.release_date.day;
}

std::ostream& operator<<(std::ostream& stream, const Movie& movie) {
    stream << movie.title << " (" << movie.release_date.year << ")" << std::endl;
    return stream;
}

Movie get_movie() {
    return {"Her", 2013};
}

void show_movie(Movie* movie) {
    std::cout << *movie;
}

int main(int argc, char const* argv[]) {
    // std::vector<Movie> movies;

    // movies.push_back({"The Revenant", {2015, 12, 25}});
    // movies.push_back({"The Revenant", {2015, 12, 25}});
    // movies.push_back({"Pather Panchali", {1955, 8, 19}});

    // for (const auto& movie : movies) {
    //     std::cout << movie.title << " (" << movie.release_date.year << ")" << std::endl;
    // }

    // std::cout << (movies[0] == movies[1]) << std::endl;

    // std::cout << movies[0];

    auto movie = get_movie();
    show_movie(&movie);

    return 0;
}
