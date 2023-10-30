// 2. Find the largest number among three given numbers and display it.

#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {3344,73456,699};

    if(arr[0]> arr[1])
    {
        if(arr[0]>arr[2])
            cout<<arr[0];
        else if(arr[2] > arr[0])
            cout<<arr[2];
    }
    else
    {
        if(arr[1] > arr[2])
            cout<<arr[1];
        else
            cout<<arr[2];
    }
    
    return 0;
}