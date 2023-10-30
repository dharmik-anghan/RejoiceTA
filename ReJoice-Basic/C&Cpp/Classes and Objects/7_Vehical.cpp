//7. Create a class called Vehicle with member variables for make, model and year. Include a constructor to initialize the values. Instantiate two Vehicle objects with different make, model and year values.

#include <iostream>
#include <string>
using namespace std;

class Vehical
{
    private:
        string made,model;
        int year;
    public:
        Vehical(){
            made = model = "";
            year = 2000;
        }
        Vehical(string made, string model, int year)
        {
            this->made = made;
            this->model = model;
            this->year = year;
        }
        void printVehical()
        {
            cout<<"Made = "<<made<<endl;
            cout<<"Model = "<<model<<endl;
            cout<<"Year = "<<year<<endl;
        }
};  

int main()
{
    Vehical v1("Tata", "Harrier", 2023), v2("Tesla", "Model 3", 2022);

    v1.printVehical();
    cout<<endl;
    v2.printVehical();

    return 0;
}