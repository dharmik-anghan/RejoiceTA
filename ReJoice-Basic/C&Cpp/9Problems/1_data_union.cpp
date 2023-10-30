#include <iostream>
using namespace std;

union Data
{
    int i;
    float d;
    char c;
};


int main()
{
    Data d;
    cout<<"Enter Int: ";
    cin>>d.i;
    cout<<d.i<<endl;

    cout<<"Enter flaot: ";
    cin>>d.d;
    cout<<d.d<<endl;
    
    cout<<"Enter Char: ";
    fflush(stdin);
    cin>>d.c;
    cout<<d.c<<endl;

    
    return 0;
}