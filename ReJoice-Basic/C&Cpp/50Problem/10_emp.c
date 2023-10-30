#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EMP_COUNT 10

struct Employee{
    int empID;
    char name[50];
    char designation[50];
    int yos;
}employee[EMP_COUNT];

struct Employee inputDetails()
{
    struct Employee e;
    printf("Enter EmpID: ");
    scanf("%d",&e.empID);

    fflush(stdin);
    printf("Enter Name: ");
    scanf("%[^\n]s",&e.name);

    fflush(stdin);
    printf("Enter Designation: ");
    scanf("%[^\n]s",&e.designation);

    printf("Enter YOS: ");
    scanf("%d",&e.yos);

    return e;
}

void displayEmploeesByYOS(struct Employee *e, int ser) {

    for(int i = 0; i < 71; i++)
        printf("-");
    printf("\n");

    printf("|%-10s | %-20s | %-20s | %-10s|\n", "Emp ID", "Name", "Designation", "YOS");

    for(int i = 0; i < 71; i++)
        printf("-");
    printf("\n");

    for (int i = 0; i < EMP_COUNT; i++) {
        if(ser <= e[i].yos){
            printf("|%-10d | %-20s | %-20s | %-10d|\n", e[i].empID, e[i].name, e[i].designation, e[i].yos);
        }
    }
}
void displayEmployeesByDesignation(struct Employee *e, char *ser) {
    int total = 0;
    
    for(int i = 0; i < 71; i++)
        printf("-");
    printf("\n");

    printf("|%-10s | %-20s | %-20s | %-10s|\n", "Emp ID", "Name", "Designation", "YOS");

    for(int i = 0; i < 71; i++)
        printf("-");
    printf("\n");

    for (int i = 0; i < EMP_COUNT; i++) {
        if(strcmp(ser, e[i].designation) == 0){
            printf("|%-10d | %-20s | %-20s | %-10d|\n", e[i].empID, e[i].name, e[i].designation, e[i].yos);
            total = total + e[i].yos;
        }
    }
}

int main()
{
   
    for(int i = 0; i < EMP_COUNT; i++)
    {
        printf("Emplyoee %d\n", i+1);
        employee[i] = inputDetails();
    } 
    int choice;
    while(1){
        printf("1. Search By YOS\n");
        printf("2. Search By Designation\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        int service;
        char desig[50];
        switch (choice)
        {
        case 1:{
            printf("\nInput the YOS: ");
            scanf("%d", &service);
            displayEmploeesByYOS(employee, service);
            break;
            }
        case 2:{
            printf("\nInput the Designation: ");
            fflush(stdin);
            scanf("%[^\n]s", desig);
            displayEmployeesByDesignation(employee, desig);
            break;
        }
        case 3:
            exit(0);
        
        default:
            printf("Choose Correct Option...\n");;
        }

    }
    

    return 0;

}