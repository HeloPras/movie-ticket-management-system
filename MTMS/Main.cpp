#include<iostream>
#include "Movie.h"
#include "MovieDatabase.h"
#include "Menu.h"
using namespace std;

int main() {
    MovieDatabase movieDatabase;

    while (true) {
        Menu::showMainMenu();
        int choice = Menu::getUserChoice();

        switch (choice) {
            case 1: {
                string title, genre;
                int year;
                float rating;
                cin.ignore();
                cout << "Enter movie title: ";
                getline(cin, title);
                cout << "Enter movie genre: ";
                getline(cin, genre);
                cout << "Enter movie year: ";
                cin >> year;
                cout << "Enter movie rating: ";
                cin >> rating;

                Movie movie(title, genre, year, rating);
                movieDatabase.addMovie(movie);
                break;
            }
            case 2: {
                int index;
                cout << "Enter the index of the movie to remove: ";
                cin >> index;
                movieDatabase.removeMovie(index);
                break;
            }
            case 3:
                movieDatabase.displayAllMovies();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }

    return 0;
}
