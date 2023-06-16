#ifndef MOVIEDATABASE_H
#define MOVIEDATABASE_H

#include "Movie.h"
#include <vector>
using namespace std;

class MovieDatabase {
private:
    vector<Movie> movies;

public:
    void addMovie(const Movie& movie);
    void removeMovie(int index);
    void displayAllMovies() const;
};

#endif
