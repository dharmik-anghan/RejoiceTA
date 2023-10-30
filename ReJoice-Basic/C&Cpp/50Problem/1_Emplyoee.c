#include <stdio.h>

#define EMP_COUNT 10

struct Employee{
    int empID;
    char name[50];
    char designation[50];
    int salary;
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

    printf("Enter Salary: ");
    scanf("%d",&e.salary);

    return e;
}

void displayEmployees(struct Employee *e) {
    for(int i = 0; i < 71; i++)
        printf("-");
    printf("\n");

    printf("|%-10s | %-20s | %-20s | %-10s|\n", "Emp ID", "Name", "Designation", "Salary");

    for(int i = 0; i < 71; i++)
        printf("-");
    printf("\n");

    for (int i = 0; i < EMP_COUNT; i++) {
        printf("|%-10d | %-20s | %-20s | %-10d|\n", e[i].empID, e[i].name, e[i].designation, e[i].salary);
    }
}

int main()
{
   
    for(int i = 0; i < EMP_COUNT; i++)
    {
        printf("Emplyoee %d\n", i+1);
        employee[i] = inputDetails();
    } 
    displayEmployees(employee);
    

    return 0;

}