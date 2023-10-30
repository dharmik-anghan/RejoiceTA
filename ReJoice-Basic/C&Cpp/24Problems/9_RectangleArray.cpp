//Design a class called RectangleArray with member variables for an array of Rectangle objects and its size. Include functions to find the rectangle with the maximum area and calculate the total area of all rectangles. Instantiate a RectangleArray object, populate it, and perform the calculations.

#include <iostream>
using namespace std;

class RectangleArray
{
    private:
        double area;
        int l,b;
    public:
        void setRA(int x, int y)
        {
            l = x;
            b = y;
        }

        void findArea()
        {
            area = l*b;
        }

        int getGrestestArea(RectangleArray *r, int size)
        {
            int max = r[0].area, location = 0;
            for(int i = 0; i < size; i++)
            {
                if(r[i].area > max){
                    max = r[i].area;
                    location = i;
                }
                    cout<<i<<endl;
            }
            return location;
        }

        void display()
        {
            cout<<"L = "<<l<<" B = "<<b<<endl;
        }
};

int main()
{
    RectangleArray r[10];

    r[0].setRA(3,5);
    r[1].setRA(5,8);
    r[2].setRA(6,2);
    r[3].setRA(8,5);
    r[4].setRA(2,5);
    r[5].setRA(3,7);
    r[6].setRA(8,5);
    r[7].setRA(34,35);
    r[8].setRA(54,7);
    r[9].setRA(9,5);

    for(int i = 0; i < 10; i++)
        r[i].findArea();
    
    int largArea = r[0].getGrestestArea(r,10);

    r[largArea].display();

    return 0;
}