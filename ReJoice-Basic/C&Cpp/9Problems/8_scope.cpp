#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    {
        int y = 5;
        cout<<"X = "<<x<<endl; // X is accesable from anywhere in main function
        cout<<"Y = "<<y<<endl; //Y is local Variable of this function

    }
    {
        int z = 3;
        cout<<"X = "<<x<<endl;
        // cout<<"Y = "<<y<<endl; outside above function, Y don't exist...
        cout<<"Z = "<<z<<endl;
    }

    cout<<"X = "<<x<<endl;
    // cout<<"Y = "<<y<<endl; outside above function Y don't exist...
    //cout<<"Z = "<<z<<endl;  outside above function Z don't exist...

    return 0;
}