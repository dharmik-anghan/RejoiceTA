#include <iostream>
#include <string.h>
using namespace std;

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

int main()
{
    Student s1,s2;
    s1.name = "Dharmik";
    s1.rNo = 1;
    s1.age = 21;

    s2.name = "K";
    s2.rNo = 2;
    s2.age = 21;

    printS(s1);
    cout<<endl;
    printS(s2);

    return 0;
}