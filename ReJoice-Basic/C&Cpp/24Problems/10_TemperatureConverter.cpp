//Create a class called TemperatureConverter with member variables for temperature in Celsius and Fahrenheit. Implement functions to convert temperature between these two units. Instantiate a TemperatureConverter object, convert temperature, and print the results.

#include <iostream>
using namespace std;
class TemperatureConverter
{
    private:
        double celsius, fahrenheit;
    public:
        void setCelsius(double x)
        {
            celsius = x;
        }
        void setFahrenheit(double x)
        {
            fahrenheit = x;
        }

        void convertCtoF()
        {
            celsius = (celsius*1.8)+32;
        }
        void convertFtoC(){
            fahrenheit = (fahrenheit-32)*(0.5555555555555556);
        }

        void displayCelsius()
        {
            cout<<celsius<<endl;
        }
        void displayFahrenheit()
        {
            cout<<fahrenheit<<endl;
        }
};

int main()
{
    TemperatureConverter t1, t2;

    t1.setCelsius(100);
    t2.setFahrenheit(100);

    cout<<"Before Convert\n";
    cout<<"Celsius: ";
    t1.displayCelsius();
    cout<<"After Convert\n";
    cout<<"Fahrenheit: ";
    t1.convertCtoF(); 
    t1.displayCelsius();

    cout<<"\n\nBefore Convert\n";
    cout<<"Fahrenheit: ";
    t2.displayFahrenheit();
    cout<<"After Convert\n";
    cout<<"Celsius: ";
    t2.convertFtoC(); 
    t2.displayFahrenheit();

    return 0;
}