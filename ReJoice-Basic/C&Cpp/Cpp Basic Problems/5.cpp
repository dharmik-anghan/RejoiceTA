// 5. Check whether a given number is prime or not.

#include <iostream>
using namespace std;
int isPrime(int );

int main()
{
    int x;
    cout<<"Enter Number: ";
    cin>>x;

    if(isPrime(x))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}

int isPrime(int x)
{
    for(int i = 2; i < x; i++)
    {
        if(x%i == 0)
            return 0;
    }
    return 1;
}