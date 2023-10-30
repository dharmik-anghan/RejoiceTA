// 43. Write a program that takes an array of integers as input and removes all the negative elements from the array using pointers.

/*
calculate -ve number and make new array using malloc;
give old array values to new array 
print both array 
free both DMA variable
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter Size of Array: ");
    scanf("%d", &size);

    printf("Enter Array: ");
    int *array = (int*)malloc(size*(sizeof(int)));//memory allocation
    for(int i = 0; i < size; i++)
        scanf("%d",&array[i]);

    int n = 0;    
    for(int i = 0; i < size; i++)
    {
        if(array[i] < 0)
            n++;
    }

    int *newArray = (int*)(malloc((size-n)*sizeof(int)));

    int j = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] >= 0){
            newArray[j] = array[i];
            j++;
        }
    }

    printf("Before: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nAfter: ");
    for(int i = 0; i < size-n; i++)
    {
        printf("%d ", newArray[i]);
    }

    free(array);
    free(newArray);

    return 0;
}