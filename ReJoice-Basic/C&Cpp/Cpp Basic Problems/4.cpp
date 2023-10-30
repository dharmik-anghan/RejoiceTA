// 4. Calculate the factorial of a given number and display the result.

#include <iostream>
using namespace std;
int factorial(int );

int main()
{
    cout<<"Enter Value: ";
    int x;
    cin>>x;

    int fact = factorial(x);
    cout<<"Factorial of "<<x<<" is "<<fact;
    return 0;
}

int factorial(int x)
{
    if(x == 0 || x == 1)
        return 1;
    int fact = x;
    return (fact*(factorial(x-1)));
}