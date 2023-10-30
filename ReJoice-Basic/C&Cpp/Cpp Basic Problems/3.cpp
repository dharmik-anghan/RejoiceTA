//3. Convert a temperature from Celsius to Fahrenheit and vice versa.

#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Celsius: ";
    float c;
    cin>>c;
    cout<<(c*1.8)+32<<" F\n";
    cout<<"Enter Fahrenheit: ";
    float f;
    cin>>f;
    cout<<((f - 32)*5)/9<<" C\n";
    return 0;
}