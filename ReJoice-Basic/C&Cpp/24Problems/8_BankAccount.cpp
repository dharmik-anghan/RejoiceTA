//Create a class called BankCustomer with member variables for customer name, account number, and balance. Implement a function to transfer money to another customer’s account. Instantiate two BankCustomer objects, perform the transfer, and print the updated balances.

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    private:
        string name;
        int acNo;
        double balance;
    public:
        void openAC(string name, int acNo, double balance)
        {
            this->name = name;
            this->acNo = acNo;
            this->balance = balance;
        }

        void displayBankDetails()
        {
            cout<<"---------------------------\n";
            cout<<"Ac No.:    "<<acNo<<endl;
            cout<<"Name:      "<<name<<endl;
            cout<<"Balance:   "<<balance<<endl;
            cout<<"---------------------------\n";
        }
        void transferMoney(BankAccount b,double amount)
        {
            balance = balance - amount;
            b.balance = b.balance + amount;
        }
};

int main()
{
    BankAccount b[2];

    b[0].openAC("Dharmik", 1, 5000);
    b[1].openAC("K", 2, 10000);

    b[0].displayBankDetails();
    b[1].displayBankDetails();

    b[0].transferMoney(b[1], 1000);

    b[0].displayBankDetails();
    b[1].displayBankDetails();
    

    return 0;
}