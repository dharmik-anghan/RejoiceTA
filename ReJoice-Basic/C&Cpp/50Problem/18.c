// 18.Write a program that takes two arrays of integers as input and calculates their dot product.

/*
arr1 = {1,2,3}
arr2 = {4,5,6}
dot will be 1*4 + 2*5 + 3*6
so, dot = dot + (arr1[i]*arr2[i])
*/

#include <stdio.h>
int dotProduct(int*, int*, int);

int main()
{
    int size;
    printf("Enter Size of arrays: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];

    printf("Enter Array 1: \n");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr1[i]);
        
    printf("\nEnter Array 2: \n");
    for(int i = 0; i < size; i++)
        scanf("%d", &arr2[i]);

    int dot = dotProduct(arr1, arr2, size);

    printf("Dot Product is %d", dot);

    return 0;
}

int dotProduct(int *arr1, int *arr2, int size)
{
    int dotP = 0;

    for(int i = 0; i < size; i++)
    {
        dotP = dotP + (arr1[i]*arr2[i]);
    }

    return dotP;
}