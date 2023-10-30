#include <iostream>
using namespace std;
int x = 1000; //Global Variable
int main()
{
    int x = 10; // Local Variable

    cout<<"\nLocal X = "<<x; //printing Local Var
    cout<<"\nGlobal X = "<<::x<<endl; //printing Global using ::x

    cout<<"\nLocal x vlaue updated to 15 (x = 15)\nGlobal x value updated to 2000(::x = 2000)"<<endl;
    x = 15;
    ::x = 2000;
    cout<<"\nLocal X = "<<x; //printing Local Var
    cout<<"\nGlobal X = "<<::x<<endl; //printing Global using ::x

    return 0;
}