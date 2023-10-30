// 22. Write a program that takes an array of integers as input and rearranges the elements in such a way that all the even elements appear before the odd elements.
/*
2 for loop;
1st for even number and 2nd for odd number;
*/

#include <stdio.h>
#include <stdlib.h>
int* arrangeEvenOdd(int *, int );
void printArray(int *, int );


int main()
{
    int size;
    printf("Enter Size of an Array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter Array: \n");
    for(int i = 0; i < size; i++)
        scanf("%d",&array[i]);

    printf("Before: ");
    printArray(array, size);

    int *newArray = (int*)malloc(size*sizeof(int));
    newArray = arrangeEvenOdd(array,size);

    printf("\nAfter: ");
    printArray(newArray, size);

    free(newArray);
    return 0;
}
//printing array value
void printArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

//arrange even before odd
int* arrangeEvenOdd(int *array, int size)
{
    int *temp = (int*)malloc(size*sizeof(int));
    int j = 0;

    for(int i = 0; i < size; i++)
    {
        if(array[i]%2 == 0)
        {
            temp[j] = array[i];
            j++;
        }
    }
    for(int i = 0; i < size; i++)
    {
        if(array[i]%2 != 0)
        {
            temp[j] = array[i];
            j++;
        }
    }
    return temp;
}