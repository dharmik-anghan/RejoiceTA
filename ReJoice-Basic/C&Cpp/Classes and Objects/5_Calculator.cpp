//5. Create a class called Calculator with member functions for add, subtract, multiply and divide. The functions should take two integers as parameters. Instantiate a Calculator object and use it to perform simple calculations.

#include <iostream>
using namespace std;

class Calculator 
{
    private:
        int x,y;
    public:
        int add(int x, int y){
            return x+y;
        }
        int multi(int x, int y){
            return x*y;
        }
        int sub(int x, int y){
            return x-y;
        }
        float div(int x, int y){
            return x/y;
        }
};
int main()
{
    Calculator c;
    cout<<"Add = "<<c.add(10,5)<<endl;
    cout<<"Sub = "<<c.sub(10,5)<<endl;
    cout<<"Multi = "<<c.multi(10,5)<<endl;
    cout<<"Div = "<<c.div(10,5)<<endl;

    return 0;
}