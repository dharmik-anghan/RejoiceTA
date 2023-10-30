//11. Write a program that takes an array of integers as input and finds the maximum and minimum elements in the array.
#include <stdio.h>

int main()
{
    printf("Enter Size of array? ");
    int size;
    scanf("%d", &size);
    printf("What're the values?");

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for(int i = 0; i < size-1; i++)
    {
        if(arr[i] > arr[i+1])
            max = arr[i];
        
        if(arr[i] < arr[i+1])
            min = arr[i];
    }
    
    printf("MAX = %d\n", max);
    printf("MIN = %d", min);

    return 0;
}