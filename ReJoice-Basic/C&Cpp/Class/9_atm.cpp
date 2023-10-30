//Problem: Develop a program to simulate a basic ATM machine with withdrawal, deposit, and balance check functionalities. 

#include <iostream>
using namespace std;

class ATM{
    private:
        int acNum;
        double balance;
    public:
        ATM(){
            acNum = 0;
            balance = 0;
        }
        ATM(int acNum, double balance){
            this->acNum = acNum;
            this->balance = balance;
        }
        void createAC(int acNum, double balance)
        {
            this->acNum = acNum;
            this->balance = balance;
        }
        void withdraw(double v)
        {
            balance = balance - v;
            cout<<"-----------------------------------"<<endl;
            cout<<v<<" has been withdrawed"<<endl; 
            cout<<"-----------------------------------"<<endl;
            this->checkBal();
        }
        void deposit(double v){
            balance = balance + v;
            cout<<"-----------------------------------"<<endl;
            cout<<v<<" has been Deposited"<<endl; 
            cout<<"-----------------------------------"<<endl;
            this->checkBal();
        }
        void checkBal()
        {
            cout<<"-----------------------------------"<<endl;
            cout<<"Your Balance is "<<balance<<endl;
            cout<<"-----------------------------------"<<endl;
        }
};

int main()
{
    ATM a[3];

    a[0].createAC(1, 2132);
    a[1].createAC(2,23523);
    a[2].createAC(3,600000);

    int choice, i;
    double updateBal;
    while(1)
    {
        cout<<"1. Withdraw "<<endl;
        cout<<"2. Deposit "<<endl;
        cout<<"3. Check Balance "<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Choice: "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<< "Account Number: "<<endl;
            cin>>i;
            cout<<"How much u want to withdraw? "<<endl;
            cin>>updateBal;
            a[i-1].withdraw(updateBal);
            break;
        case 2:
            cout<< "Account Number: "<<endl;
            cin>>i;
            cout<<"How much u want to deposit? "<<endl;
            cin>>updateBal;
            a[i-1].deposit(updateBal);
            break;
        case 3:
            cout<< "Account Number: "<<endl;
            cin>>i;
            a[i-1].checkBal();
            break;
        case 4:
            exit(0);
        
        default:
            break;
        }
    }


    return 0;
}