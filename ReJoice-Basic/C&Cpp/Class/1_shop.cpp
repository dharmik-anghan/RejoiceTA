// Problem: Create a program that calculates the total cost of items in a shopping cart, including taxes and discounts. Real-life Use Case: Simulating an online shopping application.

/*
class ShoppingCart{
    private:
        stirng item;
        double price;
    public:
        void total cost of items()

};
*/

#include <iostream>
#include <string>
using namespace std;

class ShoppingCart
{
    private:
        string item;
        double price;

    public:
        ShoppingCart(){
            item = "";
            price = 0.0;
        }
        ShoppingCart(string item, double price){
            this->item = item;
            this->price = price;
        }
        string getItem(){
            return item;
        }
        double getPrice(){
            return price;
        }
        double totalCostOfItems()
        {
            return price;
        }
        void printList()
        {
            cout<<"Item: "<<item<<", Price: "<<price<<endl;
        }
};

int main()
{
    int size = 5;
    cout<<"----------ITEM AVAILABLE-----------"<<endl;
    ShoppingCart item[size] = {{"laptop", 49000}, 
                            {"mouse", 399},
                            {"keyboard", 1399},
                            {"phone",14999},
                            {"cpu", 59000}, 
                           };

    for(int i = 0; i < size; i++)
    {
        item[i].printList();
    }

    ShoppingCart shop;
    double totalCost = 0;
    while(1){
        cout<<endl<<"Enter Purchased Item: "<<endl;
        cout<<"For Exit Entet 1"<<endl;
        string s;
        cin>>s;

        for(int i = 0; i < size; i++)
        {
            if(s.compare(item[i].getItem()) == 0)
            {
                totalCost += item[i].getPrice();
            }
        }
        if(s == "1")
            break;

    }

    cout<<"----------------------------"<<endl;
    cout<<"Cost of Item: "<<totalCost<<endl;
    cout<<"Tax on Item: "<<totalCost*0.18<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"Total Cost: "<<totalCost + (totalCost*0.18)<<endl;
    cout<<"----------------------------"<<endl;

    return 0;
}