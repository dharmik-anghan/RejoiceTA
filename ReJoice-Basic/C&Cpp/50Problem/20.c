// 20. Write a program that takes an array of integers as input and finds the second-largest and second-smallest elements in the array.

/*
sort an array in acending and choose array[size-1] as second largest
and array[1] as second smallest
*/

#include <stdio.h>
void sort(int*, int);


int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    sort(arr, size);

    printf("Second Smallest Element is %d\n", arr[1]);
    printf("Second Largest Element is %d", arr[size-2]);

    return 0;
}

void sort(int *arr,int size)
{
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}