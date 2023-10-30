// 10. Generate the Fibonacci series up to a specified limit and display the numbers.

#include <iostream>
using namespace std;
void printFib(int );

int main()
{
    int x;
    cout<<"Enter Fib Series till You want to print\n";
    cin>>x;

    printFib(x);

    return 0;
}

void printFib(int x)
{
    int a = -1, b = 1, temp;

    for(int i = 0; i < x; i++)
    {
        temp = a+b;
        a = b;
        b = temp;
        cout<<temp<<" ";
    }
}