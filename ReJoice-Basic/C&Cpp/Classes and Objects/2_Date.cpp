// 2. Create a class called Date with member variables for month, day and year. Include a constructor to initialize the date and a function to print the date. Instantiate a Date object, initialize it in the constructor, and call the print function.

#include <iostream>
#include <string>

using namespace std;
class Date
{
    private:
        string month;
        int date, year;
    public:
        //DC assigning value
        Date(){
            date = 01;
            month = "Jan";
            year = 2000;
        }
        void printDate(){
            cout<<date<<" "<<month<<" "<<year<<endl;
        }
};  

int main()
{
    Date d;
    d.printDate();

    return 0;
}