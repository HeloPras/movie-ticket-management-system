#include "MovieDatabase.h"
#include <iostream>
using namespace std;

void MovieDatabase::addMovie(const Movie& movie) {
    movies.push_back(movie);
    cout << "Movie added to the database." << endl;
}

void MovieDatabase::removeMovie(int index) {
    if (index >= 0 && index < movies.size()) {
        movies.erase(movies.begin() + index);
        cout << "Movie removed from the database." << endl;
    } else {
        cout << "Invalid movie index." << endl;
    }
}

void MovieDatabase::displayAllMovies() const {
    if (movies.empty()) {
        cout << "No movies in the database." << endl;
    } else {
        for (const Movie& movie : movies) {
            movie.display();
            cout << endl;
        }
    }
}
