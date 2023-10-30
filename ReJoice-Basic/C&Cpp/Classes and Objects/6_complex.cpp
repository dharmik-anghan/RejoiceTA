//6. Create a class called Complex with member variables for real and imaginary parts of a complex number. Include functions to perform complex number arithmetic. Instantiate two Complex objects and test the arithmetic functions.
#include <iostream>
using namespace std;
class Complex{
    private:
        int real, imag;
    public:
        Complex(){
            real = imag = 0;
        }
        void setComplex(int real, int imag){
            this->real = real;
            this->imag = imag;
        }
        Complex Addition(Complex C){
            Complex temp;
            temp.real = real + C.real;
            temp.imag = imag + C.imag;

            return temp;
        }
        Complex Substraction(Complex C){
            Complex temp;
            temp.real = real - C.real;
            temp.imag = imag - C.imag;

            return temp;
        }
        void printComplex()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }
};

int main()
{
    Complex c1,c2,c3,c4;

    c1.setComplex(8,10);
    c2.setComplex(4,7);
    c3 = c1.Addition(c2);
    c4 = c1.Substraction(c2);

    c1.printComplex();
    c2.printComplex();
    c3.printComplex();
    c4.printComplex();


    return 0;
}