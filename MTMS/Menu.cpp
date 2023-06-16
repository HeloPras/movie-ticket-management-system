#include "Menu.h"
#include <iostream>
using namespace std;

void Menu::showMainMenu() {
    cout << "Movie Management System" << endl;
    cout << "-----------------------" << endl;
    cout << "1. Add movie" << endl;
    cout << "2. Remove movie" << endl;
    cout << "3. Display all movies" << endl;
    cout << "4. Exit" << endl;
}

int Menu::getUserChoice() {
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}
