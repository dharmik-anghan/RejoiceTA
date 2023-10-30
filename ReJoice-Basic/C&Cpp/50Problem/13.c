//13. Write a program that takes an array of integers as input and calculates the sum and average of all the elements.
#include <stdio.h>

int main()
{
    printf("Enter Size of array? ");
    int size;
    scanf("%d", &size);
    printf("What're the values?");

    int arr[size];
    //input 
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    //sum of elements
    int sum = 0, avg;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    //average 
    avg = sum/size;
    printf("Sum = %d\n", sum);
    printf("Avg = %d", avg);

    return 0;
}