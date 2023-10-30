//Problem: Develop a program that generates Fibonacci series up to a given number.

#include <iostream>
using namespace std;

class FibSeries{
    private:
        int value;
    public:
        //DC 
        FibSeries(){value = 0;}
        //PC
        FibSeries(int value){
            this->value = value;
        }
        //input
        void input(int value){
            this->value = value;
        }
        //generate nth Fib number
        int generateFib()
        {
            int a = -1, b = 1, temp;
            for(int i = 0; i < value; i++){
                temp = a+b;
                a = b;
                b = temp;
            }
            return temp;
        }
};

int main()
{
    FibSeries f(10), f2;

    cout<<f.generateFib();

    cout<<endl;
    f2.input(20);
    cout<<f2.generateFib();

    return 0;
}