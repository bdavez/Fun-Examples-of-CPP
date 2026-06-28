
/*
 DOCUMENTATION

 Program Purpose:
    A program that that stores relevant information about book descrptions and keeping track of them

 Classes: 
    Book - Stores variables and functions relating to descriptive information a book would contain
    Bookshelf - Contains an array of book objects and is able to work with them 

 Variables:
    shelf1 - an object created for the class BookShelf
    title - descriptive string for book object
    isbn - descriptive string for book object
    author - descriptive string for book object
    edition - descriptive string for book object
    publisher - descriptive string for book object
    year - descriptive string for book object
*/

/*
 TEST PLAN
 
 Normal case:

    title1
    1
    author1
    ed1
    pub1
    1999
    --------------
    title2
    2
    author2
    ed2
    pub2
    1989
    --------------
    title3
    3
    author3
    ed3
    pub3
    2003
    --------------
    title4
    4
    author4
    ed4
    pub4
    2009
    --------------
    title5
    5
    author5
    ed5
    pub5
    1949
    --------------
    title6
    6
    author6
    ed6
    pub6
    2017
    --------------
    title7
    7
    author7
    ed7
    pub7
    1996
    --------------

 Discussion:
    This program has no user input
    This is designed to have a bookshelf which contains book objects that have their own built in descriptions and are able to be managed from the bookshelf
 
*/
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

class Book {
    private:
        string title;
        string isbn;
        string author;
        string edition;
        string publisher;
        string year;

    public:
        void set(string title, string isbn, string author, string edition, string publisher, string year) {
            this->title = title;
            this->isbn = isbn;
            this->author = author;
            this->edition = edition;
            this->publisher = publisher;
            this->year = year;
        };
        string getTitle() {
            return title;
        }
        string getYear() {
            return year;
        }
        void print () {
            cout << title << endl;
            cout << isbn << endl;
            cout << author << endl;
            cout << edition << endl;
            cout << publisher << endl;
            cout << year << endl;
            cout << "--------------" << endl;
        } 
};

class Bookshelf {
    public:
        Book myShelf[12];
    void main() {
        myShelf[0].set("title1","1","author1","ed1","pub1","1999");
        myShelf[1].set("title2","2","author2","ed2","pub2","1989");
        myShelf[2].set("title3","3","author3","ed3","pub3","2003");
        myShelf[3].set("title4","4","author4","ed4","pub4","2009");
        myShelf[4].set("title5","5","author5","ed5","pub5","1949");
        myShelf[5].set("title6","6","author6","ed6","pub6","2017");
        myShelf[6].set("title7","7","author7","ed7","pub7","1996");
        myShelf[7].set("title8","8","author8","ed8","pub8","2020");
        myShelf[8].set("title9","9","author9","ed9","pub9","1911");
        myShelf[9].set("title10","10","author10","ed10","pub10","2015");
        myShelf[10].set("title11","11","author11","ed11","pub11","1997");
        myShelf[11].set("title12","12","author12","ed12","pub12","2013");

        for(int i = 0; i < 7; i++) {
            myShelf[i].print();
        }
    }
};
int main () 
{
    Bookshelf shelf1;
    shelf1.main();
}