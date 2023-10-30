#include <stdio.h>

#define STUDENTS 2
#define NO_OF_SUBJECT 5

//structer for student data
struct Student{
    int id;
    char name[50];
    int age;
    int subjectMarks[NO_OF_SUBJECT];
};

struct Student inputDetails()
{
    //taking and storing values in variable
    struct Student student; 
    printf("Enter ID: ");
    scanf("%d", &student.id);

    fflush(stdin); // Remove newline character from buffer 
    printf("Enter Name: ");
    scanf("%[^\n]s", &student.name);

    printf("Enter Student Age: ");
    scanf("%d", &student.age);

    printf("Enter Maths,Science,Social Scienc, PE and English Marks: \n");
    for(int i = 0; i < NO_OF_SUBJECT; i++){
        scanf("%d", &student.subjectMarks[i]);
    }
    printf("\n");

    //return the values
    return student;
    
}

void printGradeOfStudent(struct Student *student)
{
    for(int i = 0; i < STUDENTS; i++)
    {
        int avg = 0;
        printf("\n---------Grade of %s--------->\n", student[i].name);
        printf("\n");
        printf("ID: %d\n", student[i].id);
        printf("Name: %s\n", student[i].name);
        printf("Age: %d\n", student[i].age);
        printf("Maths, Science, Social Scienc, PE and English: \n");
        for(int j = 0; j < NO_OF_SUBJECT; j++){
            avg = avg + student[i].subjectMarks[j];
            printf("%d\n", student[i].subjectMarks[j]);
        }
        printf("Grade : %d %\n", (avg/(NO_OF_SUBJECT*100))*100);
        printf("\n------------------------------->\n");
    }
    
}

int main()
{
    struct Student student[STUDENTS];
    //taking value from users
    for(int i = 0; i < STUDENTS; i++)
    {
        student[i] = inputDetails();
    }
    
    printGradeOfStudent(student);

    return 0;
}