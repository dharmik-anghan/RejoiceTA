#include <iostream>
using namespace std;

void swapUsingRef(int*& x, int*& y,int size)
{
    for(int i = 0; i < size; i++)
    {
        int temp = x[i];
        x[i] = y[i];
        y[i] = temp;
    }
}
void displayArray(int *x, int *y, int size)
{
    cout<<"\n1st Array: \n";
    for(int i =0; i  <size; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<"\n2nd Array: \n";
    for(int i =0; i  <size; i++)
    {
        cout<<y[i]<<" ";
    }
}

int main()
{
    int size;

    cout<<"Enter Size of Array\n";
    cin>>size;
    int *arr1 = new int[size];
    int *arr2 = new int[size];

    cout<<"Enter elements of 1st array:\n";
    for(int i = 0; i < size; i++)
        cin>>arr1[i];
    cout<<"Enter elements of 2nd array:\n";
    for(int i = 0; i < size; i++)
        cin>>arr2[i];

    displayArray(arr1,arr2,size);
    swapUsingRef(arr1,arr2,size);
    displayArray(arr1,arr2,size);

    cout<<"Using Ref\n";
    

    return 0;
}
