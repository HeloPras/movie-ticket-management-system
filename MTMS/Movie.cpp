#include "Movie.h"
#include <iostream>
using namespace std;

Movie::Movie() {
    title = "";
    genre = "";
    year = 0;
    rating = 0.0;
}

Movie::Movie(const string& title, const string& genre, int year, float rating) {
    this->title = title;
    this->genre = genre;
    this->year = year;
    this->rating = rating;
}

string Movie::getTitle() const {
    return title;
}

string Movie::getGenre() const {
    return genre;
}

int Movie::getYear() const {
    return year;
}

float Movie::getRating() const {
    return rating;
}

void Movie::setTitle(const string& title) {
    this->title = title;
}

void Movie::setGenre(const string& genre) {
    this->genre = genre;
}

void Movie::setYear(int year) {
    this->year = year;
}

void Movie::setRating(float rating) {
    this->rating = rating;
}

void Movie::display() const {
    cout << "Title: " << title << endl;
    cout << "Genre: " << genre << endl;
    cout << "Year: " << year << endl;
    cout << "Rating: " << rating << endl;
}
