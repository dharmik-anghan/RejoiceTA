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
        int h, m, s;
    public:
        Time(){}
        Time(int h, int m, int s){
            this->h = h;
            this->m = m;
            this->s = s;
        }

        void setTime(int h, int m, int s){
            this->h = h;
            this->m = m;
            this->s = s;
        }

        void resetTime(){
            m = m + s/60;
            s = s%60;
            h = h + m/60;
            m = m%60;     
        }

        Time operator+(Time T){
            Time temp;
            temp.s = T.s + s;
            temp.m = T.m + m;
            temp.h = T.h + h;
            temp.resetTime();
            return temp;
        }
        Time operator-(Time T){
            Time temp;
            


            temp.s = s - T.s;
            temp.m = m - T.m;
            temp.h = h - T.h;

            while (temp.s < 0) {
                temp.s += 60;
                temp.m--;
            }
            while (temp.m < 0) {
                temp.m += 60;
                temp.h--;
            }
            
            return temp;
        }
        void displayTime()
        {
            cout<<h<<"h : "<<m<<"m : "<<s<<"s"<<endl;
        }
};

int main()
{
    Time t1(2,120,180),t2(3,60,12),t3,t4;

    t1.resetTime();
    t2.resetTime();

    t3 = t1 + t2;
    t4 = t1 - t2;

    t3.displayTime();
    t4.resetTime();
    t4.displayTime();

    return 0;
}