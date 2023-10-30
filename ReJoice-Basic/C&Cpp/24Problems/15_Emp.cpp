// Design a class called EmployeeList with member variables for an array of Employee objects and its size. Include functions to find the employee with the highest salary and calculate the average salary of all employees. Instantiate an EmployeeList object, populate it, and perform the calculations.
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        int id;
        double salary,averageSalary=0;
    public:
        //setter
        void setEmp(string name, int id, double salary){
            this->name = name;
            this->id = id;
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

        //highest salary

        void highestSalary(int size)
        {
            int emp = 0;
            double high = this[0].salary;
            for(int i = 0; i < size; i++)
            {
                if(this[i].salary > high)
                {
                    high = this[i].salary;
                    emp = i;
                }
            }
            this[emp].printEmp();
        }

        //print
        void printEmp()
        {
            cout<<"ID:     "<<id<<endl;
            cout<<"Name:   "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
        }

        void printAverageSalary(int size)
        {
            for(int i = 0; i < size; i++)
            {
                averageSalary += this[i].salary;
            }

            averageSalary = averageSalary/size;
            cout<<"\nAverage Salary of emp is "<<averageSalary<<endl;
        }
};

int main()
{
    Employee e[5];

    e[0].setEmp("Dharmik",1,2000);
    e[1].setEmp("Keval",2,10000);
    e[2].setEmp("Jay",3,25000);
    e[3].setEmp("Ajay",4,2000);
    e[4].setEmp("Vijay",5,7000);

    e[0].highestSalary(5);
    e[0].printAverageSalary(5);

    return 0;
}
