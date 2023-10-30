#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define TOTAL_BOOK 3

struct Book inputBookDetails();
void printBook(struct Book);
void searchBookByTitle(struct Book*, char*);
void searchBookByAuthor(struct Book*, char*);
void searchBookByGenre(struct Book*, char*);


struct Book{
    int bookID;
    char title[50];
    char author[50];
    char genre[20];
    bool availability;
};

int main()
{   
    struct Book books[TOTAL_BOOK];
    books[0].bookID = 1;
    strcpy(books[0].title,"dharmik");
    strcpy(books[0].author,"dhar");
    strcpy(books[0].genre,"action");
    books[0].availability = 1;

    books[1].bookID = 2;
    strcpy(books[1].title,"keval");
    strcpy(books[1].author,"kev");
    strcpy(books[1].genre,"scifi");
    books[1].availability = 0;

    books[2] = inputBookDetails();

    int choice;
    while(1){
        printf("Options:\n");
        printf("1. Search By Title\n");
        printf("2. Search By Author\n");
        printf("3. Search By Action\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        char *str;

        switch (choice)
        {
        case 1:{
            printf("Enter Title: ");
            fflush(stdin);
            scanf("%[^\n]s", str);
            searchBookByTitle(books,str);
            break;
        }
        case 2:{
            printf("Enter Author Name: ");
            fflush(stdin);
            scanf("%[^\n]s", str);
            searchBookByAuthor(books,str);
            break;
        }
        case 3:{
            printf("Enter Genre: ");
            fflush(stdin);
            scanf("%[^\n]s", str);
            searchBookByGenre(books,str);
            break;
        }
        case 4:
            exit(0);
        
        default:
            printf("\nWrong Option!!! Enter Correct Option\n\n");
        }
    }

    return 0;
}
//take input from user
struct Book inputBookDetails()
{
    struct Book b;
    printf("\nBookID: ");
    scanf("%d", &b.bookID);
    printf("\n");

    printf("Book_Title: ");
    fflush(stdin);
    scanf("%[^\n]s", b.title);
    printf("\n");

    printf("Book_Author: ");
    fflush(stdin);
    scanf("%[^\n]s", b.author);
    printf("\n");

    printf("Book_Genre: ");
    fflush(stdin);
    scanf("%[^\n]s", b.genre);
    printf("\n");

    printf("Book_Availability: ");
    scanf("%d", &b.availability);
    printf("\n");

    return b;


}
//print book
void printBook(struct Book b)
{
    //if you want to print all book use for loop here or in main function
    // for(int i = 0; i < TOTAL_BOOK; i++)
    // {
        printf("\nBookID:            %d\n", b.bookID);
        printf("Book_Title:        %s\n", b.title);
        printf("Book_Author:       %s\n", b.author);
        printf("Book_Genre:        %s\n", b.genre);
        printf("Book_Availability: ");
        b.availability == 1 ? printf("Available\n"): printf("Not Available\n\n");
            printf("------------------------------->\n\n");

    // }
}

//search books by title
void searchBookByTitle(struct Book *b, char *str)
{
    int flag = 0;
    for(int i = 0; i < TOTAL_BOOK; i++)
    {
        if(strcmp(b[i].title, str) == 0){
            printf("\n---------BOOK FOUND----------->\n");
            printBook(b[i]);
            flag = 1;
        }
    }
    if(flag == 0){
            printf("\n---------BOOK NOT FOUND----------->\n\n");
    }
}

//search books by author
void searchBookByAuthor(struct Book *b, char *str)
{
    int flag = 0;
    for(int i = 0; i < TOTAL_BOOK; i++)
    {
        if(strcmp(b[i].author, str) == 0){
            printf("\n---------BOOK FOUND----------->\n");
            printBook(b[i]);
            flag = 1;
        }
    }
    if(flag == 0){
            printf("\n---------BOOK NOT FOUND----------->\n\n");
    }
}

//search books by genre
void searchBookByGenre(struct Book *b, char *str)
{
    int flag = 0;
    for(int i = 0; i < TOTAL_BOOK; i++)
    {
        if(strcmp(b[i].genre, str) == 0){
            printf("\n---------BOOK FOUND----------->\n");
            printBook(b[i]);
            flag = 1;
        }
    }
    if(flag == 0){
            printf("\n---------BOOK NOT FOUND----------->\n\n");
    }
}

