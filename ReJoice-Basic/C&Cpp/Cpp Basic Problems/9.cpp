//9. Implement a basic calculator that performs addition, subtraction, multiplication, and division operations.

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int x, y;

    int choice;

    while(1){
        cout<<"1. + \n";
        cout<<"2. - \n";
        cout<<"3. / \n";
        cout<<"4. * \n";
        cout<<"5. Exit \n";
        cout<<"Enter Choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter 2 Values: ";
            cin>>x>>y;
            cout<<"\nAddition is "<<x+y<<endl<<endl;
            break;
        case 2:
            cout<<"Enter 2 Values: ";
            cout<<"\nSub is "<<x-y<<endl<<endl;
            break;
        case 3:
            cout<<"Enter 2 Values: ";
            cout<<"\nDivide is "<<x/y<<endl<<endl;
            break;
        case 4:
            cout<<"Enter 2 Values: ";
            cout<<"\nMulti is "<<x*y<<endl<<endl;
            break;
        case 5:
            exit(0);
        
        default:
            cout<<"Choose Valid Number";
        }
    }
    return 0;
}
