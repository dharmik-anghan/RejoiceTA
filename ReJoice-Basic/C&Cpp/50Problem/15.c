// 15. Write a program that takes an array of integers as input and sorts it in ascending order using the bubble sort algorithm.

/*
take input from user
bubble sort = need 2 for loop cz. take first element and compare with the next till it get it's last plast and again do same with second element
ascending means lower to higher
*/

#include <stdio.h>
void sortAnArray(int*, int);

int main()
{
    int size;
    printf("What's size of array? ");
    scanf("%d", &size);

    int array[size];
    printf("Enter Array: ");
    for(int i = 0; i < size; i++)
        scanf("%d", &array[i]);
    
    //calling fuction to sort an array
    sortAnArray(array,size);
    
    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);
    return 0;
}

//// Sorts an array in ascending order using bubble sort
void sortAnArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(arr[i] <= arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}