//1. Create a class called Rectangle with member variables for length and width, and member functions to get and set those values. Instantiate a Rectangle object and set its length and width. Print the length and width.
#include <iostream>
using namespace std;
class Rectangle
{
    private:
        double length, width;
    public:
        void setLength(double length){
            this->length = length;
        }
        void setWidth(double width){
            this->width = width;
        }
        double getLength(){
            return length;
        }
        double getWidth(){
            return width;
        }
        
};

int main()
{
    Rectangle r;
    r.setLength(3);
    r.setWidth(4);

    cout<<"Length = "<<r.getLength()<<endl;
    cout<<"Width  = "<<r.getWidth()<<endl;

    return 0;
}