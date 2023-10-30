#include <iostream>
using namespace std;

int counter = 0;

void inputI(int x)
{
    for(int i = 0; i < x; i++)
        counter++;
}
int main()
{
    cout<<"\nCounter = "<<counter;

    inputI(10);
    cout<<"\nCounter = "<<counter;

    inputI(1);
    cout<<"\nCounter = "<<counter;

    inputI(123);
    cout<<"\nCounter = "<<counter;

    return 0;
}