//Problem: Implement a basic calculator that can perform arithmetic operations like addition, subtraction, multiplication, and division
#include <iostream>
using namespace std;

class Calculater{
    private:
        double x, y;
    public:
        Calculater(){}
        Calculater(double x, double y){
            this->x = x;
            this->y = y;
        }
        void inputValues(int x, int y){
            this->x = x;
            this->y = y;
        }

        double add(){
            return x+y;
        }
        double multi(){
            return x*y;
        }
        double div(){
            return x/y;
        }
        double sub(){
            return x-y;
        }
};

int main()
{
    Calculater c;
    char opration;
    double a, b;
    while(1){
        cout<<"\nEnter 0 0 0 to exit"<<endl;
        cout<<"Enter arithmetic operations.\nEx: 3 + 4, 4 - 6 ... etc (+,-,*,/) \n";
        cin>>a;
        cin>>opration;
        cin>>b;
        switch (opration)
        {
        case '+':
            c.inputValues(a,b);
            cout<<endl<<a<<" + "<<b<<" = "<<c.add()<<endl; 
            break;
        case '-':
            c.inputValues(a,b);
            cout<<endl<<a<<" - "<<b<<" = "<<c.sub()<<endl; 
            break;
        case '*':
            c.inputValues(a,b);
            cout<<endl<<a<<" * "<<b<<" = "<<c.multi()<<endl; 
            break;
        case '/':
            c.inputValues(a,b);
            cout<<endl<<a<<" / "<<b<<" = "<<c.div()<<endl; 
            break;
        case '0':
            exit(0);
        
        default:
            break;
        }
    }

    return 0;
}