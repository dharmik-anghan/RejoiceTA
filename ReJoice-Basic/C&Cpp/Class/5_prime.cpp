//Problem: Create a program to check whether a given number is prime or not

#include <iostream>
using namespace std;

class Prime{
    private:
        int x;
    public:
        Prime(){}
        Prime(int x){
            this->x = x;
        }

        void inputNum(int x){
            this->x = x;
        }

        int isPrime()
        {
            if(x == 2)
                return 1;
            for(int i = 2; i < x; i++)
            {
                if(x%i == 0)
                    return 0;
            }
            return 1;
        }
};

int main()
{
    Prime p1(2), p2(3), p3(10), p4;

    p4.inputNum(48);
    p1.isPrime() ? cout<<"is Prime\n" : cout<<"Not Prime\n";
    p2.isPrime() ? cout<<"is Prime\n" : cout<<"Not Prime\n";
    p3.isPrime() ? cout<<"is Prime\n" : cout<<"Not Prime\n";
    p4.isPrime() ? cout<<"is Prime\n" : cout<<"Not Prime\n";

    
    return 0;
}