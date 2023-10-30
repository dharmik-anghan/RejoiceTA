//Design a class called Vector with member variables for x and y coordinates. Include functions to calculate the magnitude and direction angle of the vector. Instantiate a Vector object, set its coordinates, and print the magnitude and angle.

/*
|v| = sqr(x,y) mangnitude
*/

#include <iostream>
#include <math.h>
using namespace std;

class Vector
{
    private:
        int x, y;
        double magnitude;
    public:
        Vector(){}
        Vector(int a, int b) : x(a) , y(b){}

        void calMagnitude()
        {
            magnitude = sqrt(x*x + y*y);
            abs(magnitude);
        }

        void displayMagnitude()
        {
            cout<<"Magnitude of "<<x<<" and "<<y<<" is "<<magnitude<<endl;
        }
};

int main()
{
    Vector v1(2,5);

    v1.calMagnitude();
    v1.displayMagnitude();

    return 0;
}