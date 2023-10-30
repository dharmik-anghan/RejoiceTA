#include <iostream>
using namespace std;

void swapUsingRef(int &x, int &y) // int &x = a; int &y = b
{
    int temp = x;
    x = y;
    y = temp;
}
void swapUsingPoi(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;
    cout<<"A = "<<a<<" B = "<<b<<endl;
    swapUsingRef(a,b);
    cout<<"Using Ref\nA = "<<a<<" B = "<<b<<endl;
    swapUsingPoi(&a,&b);
    cout<<"Using Poi\nA = "<<a<<" B = "<<b<<endl;

    return 0;
}
