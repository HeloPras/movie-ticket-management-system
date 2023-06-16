#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

class Movie {
private:
    string title;
    string genre;
    int year;
    float rating;

public:
    Movie();
    Movie(const string& title, const string& genre, int year, float rating);

    // Getters and setters
    string getTitle() const;
    string getGenre() const;
    int getYear() const;
    float getRating() const;
    void setTitle(const string& title);
    void setGenre(const string& genre);
    void setYear(int year);
    void setRating(float rating);

    void display() const;
};

#endif