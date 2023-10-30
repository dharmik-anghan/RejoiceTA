// Design a class called Triangle with member variables for three sides. Include a function to check if the triangle is valid and calculate its area. Instantiate a Triangle object, validate the sides, and print the area if it’s a valid triangle.

#include <iostream>
using namespace std;

class Triangle
{
    private:
        int a, b, c;
    public:
        Triangle(){}
        Triangle(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

        void setTriangle(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

        //check Valid trangle
        void checkTriangle(){

            if(a+b <= c || b+c <= a || a+c <= b)
                cout<<"Invalid\n";
            else
                cout<<"Valid\n";
        }
};

int main()
{
    Triangle t1(7,10,5),t2(10,20,2);

    t1.checkTriangle();
    t2.checkTriangle();

    return 0;
}