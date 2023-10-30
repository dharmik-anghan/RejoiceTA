#include <iostream>
using namespace std;


//finding min and max element in array
void findMaxMin(int *arr,int size)
{
    int max = arr[0], min = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    }

    cout<<"MAX = "<<max<<endl;
    cout<<"MIN = "<<min<<endl;
}

int main()
{
    int arr[] = {23,56,21,78,4,2,62};
    int size = sizeof(arr)/sizeof(int);

    findMaxMin(arr,size);

    return 0;
}