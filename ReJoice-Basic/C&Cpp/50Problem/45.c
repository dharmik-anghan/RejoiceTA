// 45. Write a program that takes an array of integers as input and calculates the sum of the elements using pointers and dynamic memory allocation.

/*
    allocate memory and do sum of element
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

    printf("Enter Array: \n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int sumOfArray = 0;

    for(int i = 0; i < size; i++)
    {
        sumOfArray += array[i];
    }

    printf("Sum of Array is %d\n", sumOfArray);

    //free memory
    free(array);
    return 0;
}