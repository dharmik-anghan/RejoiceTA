#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define TOTAL_CAR 3

struct Car inputCarDetails();
void printCarDetails(struct Car);
void searchCarByMake(struct Car*, char*);
void searchCarByModel(struct Car*, char*);
void searchCarByPriceRange(struct Car*, float);


struct Car{
    char make[50];
    char model[50];
    int year;
    char color[50];
    float price;
};

int main()
{   
    struct Car car[TOTAL_CAR];
    strcpy(car[0].make, "petrol");
    strcpy(car[0].model,"d");
    car[0].year = 2022;
    strcpy(car[0].color,"red");
    car[0].price = 2000.32;

    strcpy(car[1].make, "disel");
    strcpy(car[1].model,"k");
    car[1].year = 2020;
    strcpy(car[1].color,"black");
    car[1].price = 1000.56;

    car[2] = inputCarDetails();

    int choice;
    while(1){
        printf("Options:\n");
        printf("1. Search By Make\n");
        printf("2. Search By Model\n");
        printf("3. Search By Price Range\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        char *str;

        switch (choice)
        {
        case 1:{
            printf("Enter Make: ");
            fflush(stdin);
            scanf("%[^\n]s", str);
            searchCarByMake(car,str);
            break;
        }
        case 2:{
            printf("Enter Model: ");
            fflush(stdin);
            scanf("%[^\n]s", str);
            searchCarByModel(car,str);
            break;
        }
        case 3:{
            printf("Enter Price Range: ");
            float price;
            scanf("%f", &price);
            searchCarByPriceRange(car,price);
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
struct Car inputCarDetails()
{
    struct Car b;

    printf("Car_Make: ");
    
    scanf("%[^\n]s", b.make);
    printf("\n");

    printf("Car_Model: ");
    fflush(stdin);
    scanf("%[^\n]s", b.model);
    printf("\n");

    printf("Year Of Manufacture: ");
    scanf("%d", &b.year);
    printf("\n");

    printf("Car_Color: ");
    fflush(stdin);
    scanf("%[^\n]s", b.color);
    printf("\n");

    printf("Price: ");
    scanf("%f", &b.price);
    printf("\n");

    return b;


}
//print book
void printCarDetails(struct Car b)
{
    //if you want to print all book use for loop here or in main function
    // for(int i = 0; i < TOTAL_CAR; i++)
    // {
        printf("\nMake:            %s\n", b.make);
        printf("Car_Model:         %s\n", b.model);
        printf("Manufacture Year:  %d\n", b.year);
        printf("Car_color:         %s\n", b.color);
        printf("Price:             %.2f\n", b.price);

    // }
}

//search car by title
void searchCarByMake(struct Car *b, char *str)
{
    int flag = 0;
    for(int i = 0; i < TOTAL_CAR; i++)
    {
        if(strcmp(b[i].make, str) == 0){
            printf("\n---------CAR FOUND----------->\n");
            printCarDetails(b[i]);
            flag = 1;
        }
    }
    if(flag == 0){
            printf("\n---------CAR NOT FOUND----------->\n\n");
    }
}

//search car by author
void searchCarByModel(struct Car *b, char *str)
{
    int flag = 0;
    for(int i = 0; i < TOTAL_CAR; i++)
    {
        if(strcmp(b[i].model, str) == 0){
            printf("\n---------CAR FOUND----------->\n");
            printCarDetails(b[i]);
            flag = 1;
        }
    }
    if(flag == 0){
            printf("\n---------CAR NOT FOUND----------->\n\n");
    }
}

//search car by genre
void searchCarByPriceRange(struct Car *b, float price)
{
    int flag = 0;
    for(int i = 0; i < TOTAL_CAR; i++)
    {
        if(b[i].price >=  price){
            printf("\n---------CAR FOUND----------->\n");
            printCarDetails(b[i]);
            flag = 1;
        }
    }
    if(flag == 0){
            printf("\n---------CAR NOT FOUND----------->\n\n");
    }
}

