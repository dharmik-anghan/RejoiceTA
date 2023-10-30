// Problem: Write a program to find the factorial of a given number

#include <iostream>
using namespace std;

class Fact{
    private:
        int factorial = 1, data;
    public:
        Fact(){};
        Fact(int data){
            this->data = data;
        }

        int findFactorial()
        {
            for(int i = 1; i <= data; i++)
            {
                factorial *= i;
            }
            return factorial;
        }
};

int main()
{   
    Fact f(0);
    cout<<f.findFactorial();

    return 0;
}