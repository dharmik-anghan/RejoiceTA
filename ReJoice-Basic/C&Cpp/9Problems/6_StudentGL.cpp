#include <iostream>
#include <string.h>
using namespace std;
int count_Student = 0;

class Student
{
    public:
        string name;
        int rNo;
        int age;     
};

void printS(Student &s)
{
    cout<<"Name: "<<s.name<<endl;
    cout<<"R_No: "<<s.rNo<<endl;
    cout<<"Age: "<<s.age<<endl;
};

Student inputS()
{
    Student s;
    cout<<"Enter Name: ";
    fflush(stdin);
    cin>>s.name;

    cout<<"Enter R_NO: ";
    cin>>s.rNo;

    cout<<"Enter Age: ";
    cin>>s.age;


    count_Student++;

    return s;
};

int main()
{
    Student s1,s2;

    s1 = inputS();
    s2 = inputS();

    // printS(s1);
    // cout<<endl;
    // printS(s2);

    cout<<"\nThere are "<<count_Student<< " Students"<<endl;

    return 0;
}