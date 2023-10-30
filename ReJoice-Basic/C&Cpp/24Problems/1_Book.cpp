//Design a class called Book with member variables for title, author, and publication year. Include a function to display all the book details. Create an array of Book objects and display the details of each book.

#include <iostream>
#include <string>
using namespace std;

class Book
{
    private:
        string title, author;
        int pYear;
    public:
        void setBook(string title, string author, int pYear){
            this->title = title;
            this->author = author;
            this->pYear = pYear;
        }

        void displayBook()
        {
            cout<<"Title:  "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"P_Year: "<<pYear<<endl;
        }
};

int main()
{   
    Book b1, b2;
    b1.setBook("C++", "Bjarne Stroustrup", 1996);
    b2.setBook("D", "Dharmik", 2002);

    b1.displayBook();
    cout<<endl;
    b2.displayBook();

    return 0;
}