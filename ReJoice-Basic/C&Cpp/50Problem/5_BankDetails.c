#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TACCOUNT 3
long long int ACCOUNT_COUNT = 9000000003;

struct BankAccount creatNewAccount();
void printBankDetails(struct BankAccount);
void withdraw_bal(struct BankAccount*, int);
void deposit_bal(struct BankAccount*, int);
int checkClientDetails(struct BankAccount*, long long int);


//structer for BankAccount data
struct BankAccount{
    long long int  account_number;
    char account_holder_name[50];
    char account_type[50];
    double balance;
};

int main()
{
    struct BankAccount client[TACCOUNT];

    //people who already have account with us
    client[0].account_number = 9000000001;
    strcpy(client[0].account_holder_name, "dharmik");
    strcpy(client[0].account_type, "Current");
    client[0].balance = 340000.00;

    client[1].account_number = 9000000002;
    strcpy(client[1].account_holder_name, "keval");
    strcpy(client[1].account_type, "Saving");
    client[1].balance = 670000.00;

    //creating new account
    client[2] = creatNewAccount();

    //
    int choice, i;
    while(1)
    {
        long long int acnumber;
        double amount;
        printf("\nWhat you want to do?\n1. Deposit\n2. Withdraw\n3. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter Your AC number: ");
            scanf("%lld", &acnumber);
            printf("Enter Deposit Value: ");
            scanf("%lf", &amount);

            i = checkClientDetails(client, acnumber);
            if(i == -1){
                printf("\n\n-------------Enter Correct Details----------->\n\n");
                return 1;
            }
            deposit_bal(&client[i], amount);
            printBankDetails(client[i]);

            break;

        case 2:
            printf("Enter Your AC number: ");
            scanf("%lld", &acnumber);
            printf("Enter Withdraw Value: ");
            scanf("%lf", &amount);

            i = checkClientDetails(client, acnumber);
            if(i == -1){
                printf("\n\n-------------Enter Correct Details----------->\n\n");
                return 1;
            }
            withdraw_bal(&client[i], amount);
            printBankDetails(client[i]);
            break;

        case 3:
            exit(0);
        
        default:
            printf("\n\n<-----Choose 1, 2 or 3---->\n\n");
        }
    }

    return 0;
}

struct BankAccount creatNewAccount()
{
    //taking and storing values in variable
    struct BankAccount b;

    b.account_number = ACCOUNT_COUNT;
    ACCOUNT_COUNT++;

    printf("Enter Name: ");
    scanf("%[^\n]s", b.account_holder_name);

    printf("Enter Account Type: \n");
    printf("1. Saving \n");
    printf("2. Current \n");
    int choice = 1;
    scanf("%d",&choice);
    while(choice){
        switch (choice)
        {
            case 1:
                strcpy(b.account_type, "Saving");
                choice = 0;
                break;
            case 2:
                strcpy(b.account_type, "Current");
                choice = 0;
                break;
            
            default:
                printf("Choose Between 1 OR 2");
            }
    }

    printf("Enter Initial Deposit Ammount: ");
    scanf("%lf", &b.balance);
    printf("\n");

    //return the values
    return b;
    
}

//print specific client details
void printBankDetails(struct BankAccount b)
{
    printf("\n---------Details of %s--------->\n", b.account_holder_name);
    printf("\n");
    printf("A/C No.: %lld\n", b.account_number);
    printf("A/C Holder Name: %s\n", b.account_holder_name);
    printf("A/C Type: %s\n", b.account_type);
    printf("A/C Balance: %.2f\n", b.balance);
    printf("\n------------------------------->\n");
    
    
}

//withdeawal changes
void withdraw_bal(struct BankAccount *b, int withdraw)
{
    //cheacking bal 
    if(b->balance < withdraw)
    {
        printf("\n\n<-------Insufficient Balance------->\n\n");
        return;
    }
    b->balance = b->balance - withdraw;
}
//deposit change
void deposit_bal(struct BankAccount *b, int deposit)
{
    b->balance = b->balance + deposit;
}

//cheacking client is there or not
int checkClientDetails(struct BankAccount *c, long long int a)
{
    for(int i = 0; i < TACCOUNT; i++)
    {
        if(c[i].account_number == a)
            return i;
    }
    return -1;
}