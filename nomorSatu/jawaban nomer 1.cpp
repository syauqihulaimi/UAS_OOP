#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    Book(string title, string author, int year) : title(title), author(author), year(year) {}

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }

    bool isKuno() {
        return year < 2000;
    }
    bool isBaru() {
        return year >= 2000;
    }
};

int main() {
    Book syauqi("Buku Pintar Ngoding", "BJ Habibi", 1997);
    Book syauqi2("Buku Sejarah Indonesia", "Jokowi", 2004);

    syauqi2.displayInfo();
    if (syauqi2.isKuno()) {
        cout << "Status: Kuno" << endl;
    } else {
        cout << "Status:  Baru" << endl;
    }

    return 0;
}
