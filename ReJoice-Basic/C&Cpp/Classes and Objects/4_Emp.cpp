// 4. Create a class called Employee with member variables for name, id and salary. Include get and set functions for each variable. Instantiate an Employee object, set the values using the set functions, and print the values using the get functions. 

#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        int id;
        double salary;
    public:
        //setter
        void setName(string name){
            this->name = name;
        }
        void setID(int id){
            this->id = id;
        }
        void setSalary(double salary){
            this->salary = salary;
        }

        //getter
        string getName(){
            return name;
        }
        int getID(){
            return id;
        }
        double getSalary(){
            return salary;
        }
};

int main()
{
    Employee e;
    e.setID(1);
    e.setName("dharmik");
    e.setSalary(120000);

    cout<<"ID     = "<<e.getID()<<endl;
    cout<<"Name   = "<<e.getName()<<endl;
    cout<<"Salaey = "<<e.getSalary()<<endl;

    return 0;
}
