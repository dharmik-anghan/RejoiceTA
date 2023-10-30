// 8. Create a class called Student with member variables for name, id and an array of test scores. Include functions to set the name and id, add test scores, and calculate the average test score. Instantiate a Student object, populate its data, and print the average test score.

#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        int id;
        int score[3];
        double average;
    public:
        Student(){
            name = "Dharmik";
            id = 1;
            score[0] = 99;
            score[1] = 78;
            score[2] = 92;
        }
        void setName(string name){
            this->name = name;
        }
        void setID(int id){
            this->id = id;
        }
        void setScore(int x, int y, int z){
            score[0] = x;
            score[1] = y;
            score[2] = z;
        }

        void calAverage()
        {
            average = ((score[0]+score[1]+score[2])/3);
        }

        void printStudent()
        {
            cout<<"ID = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Average = "<<average<<endl;
        }
};

int main()
{
    Student s1, s2;

    s2.setID(2);
    s2.setName("Keval");
    s2.setScore(78,87,98);

    s1.calAverage();
    s2.calAverage();

    s1.printStudent();
    cout<<endl;
    s2.printStudent();


    return 0;
}
