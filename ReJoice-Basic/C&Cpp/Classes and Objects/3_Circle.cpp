//3. Create a class called Circle with a member variable for radius. Include a constructor to initialize the radius and member functions to return the circumference and area. Instantiate a Circle object, initialize the radius, and print the circumference and area.

#include <iostream>
using namespace std;
#define PI 3.14

class Circle
{
    private:
        double radius, area, circumference;
    public:
        Circle(){
            radius = 5.0;
            area = 2*PI*radius*radius;
            circumference = 2 * PI * radius;
        }
        void printAreaCircumference()
        {
            cout<<"For Radius "<<radius<<" Area is "<<area<<" and Circumference is "<<circumference<<endl;
        }
};
int main()
{
    Circle c;
    c.printAreaCircumference();

    return 0;
}