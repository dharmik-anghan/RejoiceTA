//Create a class called TimeConverter with member variables for hours and minutes. Implement functions to convert time from 12-hour format to 24-hour format and vice versa. Instantiate a TimeConverter object, convert time, and print the result.


//Create a class called Time with member variables for hours, minutes, and seconds. Implement functions to add and subtract two Time objects. Instantiate two Time objects, perform the operations, and print the results.

/*
if user gives 2:120:181 + 3:60:12 = 8:03:12
                   :1
whiel(s > 60){
    s = s/60;
    m++;
}
s%60 = 1
*/
#include <iostream>
#include <math.h>
using namespace std;

class Time
{
    private:
        int h, m;
    public:
        Time(){}
        Time(int h, int m){
            this->h = h;
            this->m = m;
        }

        void setTime(int h, int m){
            this->h = h;
            this->m = m;
        }

        void resetTime(){
            h = h + m/60;
            m = m%60;     
        }

        Time operator+(Time T){
            Time temp;
            temp.m = T.m + m;
            temp.h = T.h + h;
            temp.resetTime();
            return temp;
        }
        Time operator-(Time T){
            Time temp;
            
            temp.m = m - T.m;
            temp.h = h - T.h;

            while (temp.m < 0) {
                temp.m += 60;
                temp.h--;
            }
            
            return temp;
        }

        void convertTime()
        {
            if(h < 12)
            {
                h = 12 + h;
            }
            else if(h >= 12 && h <= 24)
            {
                h = h-12;
            }
        }
        void displayTime()
        {
            cout<<h<<"h : "<<m<<"m"<<endl;
        }
};

int main()
{
    Time t1(23,12),t2(3,61),t3,t4;

    t1.resetTime();
    t2.resetTime();


    cout<<"24h Formate to 12h Formate\n";
    t1.displayTime();
    t1.convertTime();
    t1.displayTime();
    cout<<"\n24h Formate to 24h Formate:\n";
    t2.displayTime();
    t2.convertTime();
    t2.displayTime();

    return 0;
}