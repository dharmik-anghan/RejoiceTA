// Design a class called Inventory with member variables for product name, quantity, and price. Include functions to update the quantity and calculate the total value of the inventory. Instantiate an Inventory object, perform updates, and print the total value.

/*
    class Inve
        name, quantity, price;
    //update quantity
    //calculate total value of inventory

*/
#include <iostream>
#include <string>
using namespace std;

class Inventory
{
    private:
        string name;
        int quantity;
        double price;
        double inventory_value = 0;
    public:
        Inventory(){
            name = "";
            quantity = 0;
            price = 0;
        }
        double getInventoryValue()
        {
            return inventory_value;
        }
        void addItem(string s, int q, double p){
            name = s;
            quantity = q;
            price = p;
        }

        void updateQuantity(){
            cout<<"How much quantity you want to increase? ";
            int q;
            cin>>q;
            quantity += q;
        }

        void calTIC(int size)
        {
            for(int i = 0;  i < size; i++)
            {
                inventory_value += (this[i].price*quantity);
            }
        }
        void displayInventory(int size)
        {
            for(int i = 0; i < size ; i++)
            {
                cout<<"----------------"<<i<<"-----------------\n";
                cout<<"Name: "<<this[i].name<<endl;
                cout<<"Quantity: "<<this[i].quantity<<endl;
                cout<<"Price: "<<this[i].price<<endl;
                cout<<"----------------------------------\n";
            }
        }
};

int main()
{
    Inventory i[5];

    i[0].addItem("Laptop", 3, 24999);
    i[1].addItem("Keybord", 10, 899);
    i[2].addItem("Mouse", 14, 399);
    i[3].addItem("Case", 30, 99);
    i[4].addItem("Cable", 100, 49);
    i[0].displayInventory(5);

    int choice, update;

    while (1)
    {
        cout<<"\n1. Update Quantity\n";
        cout<<"2. Calculate Value of Inventory\n";
        cout<<"3. Print Inventory\n";
        cout<<"4. Exit\n";
        cout<<"Enter Choice: \n";

        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Select Item No. from Above\n";
            cin>>update;
            i[update].updateQuantity();
            break;
        case 2:
            i[0].calTIC(5);
            cout<<"Total Inventory Value is "<<i[0].getInventoryValue()<<endl;
            break;
        case 3:
            i[0].displayInventory(5);
            break;
        case 4:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}