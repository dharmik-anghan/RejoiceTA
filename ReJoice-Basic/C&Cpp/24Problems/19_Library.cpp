#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;
class Student;
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_COLOR_RESET "\x1b[0m"

string STORE_LIBRARY = "Library.txt"; //If you are making changes in Name You have to make changes in 228 line where address has been store
string STORE_BOOKID = "LibraryBookID.txt";
string LIBRARY_BOOK_PRICES = "LibraryBookPrices.txt";
int BOOKID;

class Library
{
    private:
        int bookID;
        string bookName;
        string author;
        int price;
        int pages;
    public:
        int getBookID(){
            return bookID;
        }       
        string getBookName(){
            return bookName;
        }
        string getauthor(){
            return author;
        }
        int getPrice(){
            return price;
        }
        int getPages(){
            return pages;
        }  

        void AddBook() //Add New Book to the Liabrary
        {
            cout<<"Enter Book Name: "; 
            cin.ignore();
            getline(cin, bookName);
            
            //Author Name
            cout<<"Enter Author Name: ";
            getline(cin, author);

            //Price of book
            cout<<"Enter Price: ";
            cin>>price;

            //Total Pages
            cout<<"Enter Pages: ";
            cin>>pages;

            BOOKID++; //It'll Create new bookID for every new book added.

            ofstream f1;
            f1.open(STORE_LIBRARY, ios::app);

            f1<<"\n"<<BOOKID;
            f1<<"\n"<<bookName;
            f1<<"\n"<<author;
            f1<<"\n"<<price;
            f1<<"\n"<<pages;

            f1.close();

            //TO store bookID so IDs can't over write
            ofstream f2;
            f2.open(STORE_BOOKID, ios::app);
            f2<<"\n"<<BOOKID;
            f2.close();

            cout<<ANSI_COLOR_GREEN<<"Book Information Added Successfully."<<ANSI_COLOR_RESET<<endl;
        }

        void SearchBookBYID(int id)
        {
            Library l;
            int flag = 0;
            ifstream fin;
            fin.open(STORE_LIBRARY);

            while(!fin.eof())
            {
                fin>>l.bookID;
                fin.ignore();
                getline(fin,l.bookName);
                getline(fin,l.author);
                fin>>l.price;
                fin>>l.pages;
                if(l.bookID == id)
                {
                    l.printBookInfo();
                    flag = 1;
                    break;
                }
            }
            fin.close();

            //Flag will check whether book has been found or not
            if(flag == 0)
            {
                cout<<ANSI_COLOR_RED<<"The Book "<<id<<" has not been found. Enter valid bookID.\n"<<ANSI_COLOR_RESET;
            }
        }
        void SearchBookByName(string Name)
        {
            Library l;
            int flag = 0;
            ifstream fin;
            fin.open(STORE_LIBRARY);

            while(!fin.eof())
            {
                fin>>l.bookID;
                fin.ignore();
                getline(fin,l.bookName);
                getline(fin,l.author);
                fin>>l.price;
                fin>>l.pages;

                if(!l.bookName.compare(Name))
                {
                    l.printBookInfo();
                    flag = 1;
                    break;
                }
            }

            fin.close();

            //Flag will check whether book has been found or not
            if(flag = 0)
            {
                cout<<ANSI_COLOR_RED<<bookName<<" book has not been found. Enter valid bookID.\n"<<ANSI_COLOR_RESET;
            }
        }

        void printBookInfo()
        {
            cout<<ANSI_COLOR_CYAN<<"######################################\n\n"<<ANSI_COLOR_RESET;
            cout<<"Book ID    : "<<bookID<<endl;
            cout<<"Book Name  : "<<bookName<<endl;
            cout<<"Book Author: "<<author<<endl;
            cout<<"Book Price : "<<price<<endl;
            cout<<"Book Pages : "<<pages<<endl<<endl;
            cout<<ANSI_COLOR_CYAN<<"######################################\n"<<ANSI_COLOR_RESET;
            
        }

        void printAllBooks()
        {
            Library l;
            ifstream fin;
            fin.open(STORE_LIBRARY);

            while(!fin.eof())
            {
                fin>>l.bookID;
                fin.ignore();
                getline(fin,l.bookName);
                getline(fin,l.author);
                fin>>l.price;
                fin>>l.pages;

                l.printBookInfo();
            }
            fin.close();
        }

        //Update book 
        void updateBOOK(int id)
        {
            deleteBook(id);

            cout<<"Enter Book Name: "; 
            cin.ignore();
            getline(cin, bookName);
            
            //Author Name
            cout<<"Enter Author Name: ";
            getline(cin, author);

            //Price of book
            cout<<"Enter Price: ";
            cin>>price;

            //Total Pages
            cout<<"Enter Pages: ";
            cin>>pages;

            ofstream f1;
            f1.open(STORE_LIBRARY, ios::app);

            f1<<"\n"<<id;
            f1<<"\n"<<bookName;
            f1<<"\n"<<author;
            f1<<"\n"<<price;
            f1<<"\n"<<pages;

            f1.close();

            cout<<ANSI_COLOR_GREEN<<"File has been Updated."<<ANSI_COLOR_RESET<<endl;
        }

        //Use for updation of BOOK
        void deleteBook(int id)
        {
            Library l;

            ifstream f1;
            f1.open(STORE_LIBRARY);

            ofstream fout;
            fout.open("temp.txt", ios::app);
            while(!f1.eof())
            {
                f1>>l.bookID;
                f1.ignore();
                getline(f1,l.bookName);
                getline(f1,l.author);
                f1>>l.price;
                f1>>l.pages;

                if(l.bookID != id){
                    fout<<"\n"<<l.bookID;
                    fout<<"\n"<<l.bookName;
                    fout<<"\n"<<l.author;
                    fout<<"\n"<<l.price;
                    fout<<"\n"<<l.pages;
                }
                
            }

            f1.close();
            fout.close();

            remove("Library.txt");
            rename("temp.txt", "Library.txt");
        }        
};

class Student : public Library
{
    private:
        int studentID;
        string studentName;
    public:
        int getStudentID()
        {
            return studentID;
        }
        string getStudentName()
        {
            return studentName;
        }
};

int main()
{
    ifstream fin;
    fin.open(STORE_BOOKID);

    int id;

    if(!fin)
    {
        cout<<ANSI_COLOR_RED<<"File has been created Successfully\n"<<ANSI_COLOR_RESET;
    }
    else{
        while(!fin.eof())
        {
            fin>>id;
            BOOKID = id;
        }
    }
    fin.close();

    int choice;
    while(choice != -1)
    {
        cout<<"Enter your choice:   \n";
        cout<<" 1. Add Book to Library\n";
        cout<<" 2. Search Book\n";
        cout<<" 3. Print All Books\n";
        cout<<" 4. Update Book\n";
        cout<<" 5. Exit\n";

        cin>>choice;
        Library l;
        switch(choice)
        {
            case 1: l.AddBook();
                    break;
            case 2:
                int choice2;
                while(choice2 != 3)
                {   
                    cout<<ANSI_COLOR_YELLOW<<" 2. Search Book\n"<<ANSI_COLOR_RESET;
                    cout<<"   ->1. Search by BookID\n";
                    cout<<"   ->2. Search by BookName\n"; 
                    cout<<"   ->3. Return to previous menu\n"; 
                    cin>>choice2;
                    switch(choice2)
                    {
                        case 1 : int id;
                            cout<<"Enter BookID:   ";
                            cin>>id;
                            l.SearchBookBYID(id);
                            break;

                        case 2 : string name;
                            cout<<"Enter BookName: ";
                            cin.ignore();
                            getline(cin,name);
                            l.SearchBookByName(name);
                            break;
                    }
                }
                break;

            case 3 : l.printAllBooks();
                break;
            
            case 4 : 
                int id;
                cout<<"Enter Book ID: ";
                cin>>id;
                l.updateBOOK(id);
                break;

            case 5: return 0;
        }
    }

    return 0;
}