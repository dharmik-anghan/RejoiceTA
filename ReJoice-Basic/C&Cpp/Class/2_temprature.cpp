//Problem: Write a program to convert temperatures between Celsius and Fahrenheit. Real-life Use Case: Weather applications that provide temperature conversions.

/*
    class Temprature
    {
        private:
            double tempInC;
            double tempInF;
        public:
            calculation
    }
*/

#include <iostream>
using namespace std;

class Temprature{
    private:
        double tempInC, tempInF;
    public:
        Temprature(){
            tempInC = 0;
            tempInF = 32;
        }

        void tempInCelsius(double c){
            tempInC = c;
            tempInF = (tempInC*1.8)+32;
        }
        void tempInFahrenheit(double f){
            tempInF = f;
            tempInC = ((tempInF - 32) * 0.5555555555555556);
        }

        void printTemprature()
        {
            cout<<"Celsius = "<<tempInC<<", Fahrenheit = "<<tempInF<<endl;
        }

};

int main()
{
    Temprature t1,t2;
    t1.tempInCelsius(5);
    t1.printTemprature();

    t2.tempInFahrenheit(5);
    t2.printTemprature();

    return 0;
}