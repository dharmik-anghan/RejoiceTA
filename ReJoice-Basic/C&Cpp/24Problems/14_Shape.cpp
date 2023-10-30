//Create a class called Shape with member functions to calculate the area and perimeter. Design derived classes Circle, Square, and Triangle that inherit from Shape. Instantiate objects of each class, calculate their respective area and perimeter, and print the results.

/*
    class shape

    calss Circle : shape

    class Square : shape

    class Triangle : shape
*/

#include <iostream>
using namespace std;
#define PI 3.14

class Shape
{
    protected:
        double area, perimeter;
    public:
        void display()
        {
            cout<<"Area = "<<area<<endl;
            cout<<"Perimeter = "<<perimeter<<endl;
        }
    
};

class Circle : public Shape
{
    private:
        double r;
    public:
        void setR(double x){
            r = x;
        }

        void areaofC(){
            area = PI * r*r;
        }

        void perimeterOfC(){
            perimeter = 2 * PI * r;
        }
};
class Rectangle : public Shape
{
    private:
        double l, w;
    public:
        void setLW(double x, double y){
            l = x;
            w = y;
        }

        void areaofR(){
            area = l*w;
        }

        void perimeterOfR(){
            perimeter = 2*(l+w);
        }
};
class Triangle : public Shape
{
    private:
        double a, b, c, base, height;
    public:
        void setSideOfTriangleForPerimeter(double x, double y, double z){
            a = x;
            b = y;
            c = z;
        }
        void setSideOfTriangleForArea(double x, double y){
            base = x;
            height = y;
        }

        void areaofT(){
            area = (base*height)/2;
        }

        void perimeterOfT(){
            perimeter = a + b + c;
        }
};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;

    c.setR(4);
    c.areaofC();
    c.perimeterOfC();
    cout<<"\nCircle: \n";
    c.display();

    r.setLW(4,7);
    r.areaofR();
    r.perimeterOfR();
    cout<<"\nRectangle: \n";
    r.display();

    t.setSideOfTriangleForPerimeter(3,5,7);
    t.setSideOfTriangleForArea(4,8);
    t.areaofT();
    t.perimeterOfT();
    cout<<"\nTriangle: \n";
    t.display();

    return 0;
}