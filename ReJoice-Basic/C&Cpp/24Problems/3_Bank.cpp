// Design a class called Bank with member variables for account number, account holder name, balance, and interest rate. Implement a function to calculate the interest for a given period. Instantiate a Bank object, calculate interest, and display the final balance.

#include <iostream>
#include <string>
using namespace std;

float interestRate = 0.1;

class Bank
{
    private:
        int acNo;
        string name;
        double balance, interest;
    public:
        void setAc(int acNo, string name, double balance){
            this->acNo = acNo;
            this->name = name;
            this->balance = balance;
        }

        void calInterest(int year)
        {
            interest = year * (interestRate*balance);
        }

        void showBankDetails()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Ac No: "<<acNo<<endl;
            cout<<"Balance: "<<balance<<endl;
            cout<<"Interest Rate: "<<interestRate<<endl;
            cout<<"Interest Earned: "<<interest<<endl;
            cout<<"Total Balance: "<<interest+balance<<endl;
        }
};

int main()
{
    Bank b;
    b.setAc(1, "Dharmik", 1000);

    b.calInterest(4);
    b.showBankDetails();

    return 0;
}