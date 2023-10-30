// 24. Write a program that takes an array of integers as input and finds the sum of the elements at even indices and the product of the elements at odd indices.
/*
if i%2 == 0;
    even += array[i];
else
    odd += array[i];

print even odd value
*/

#include <stdio.h>
#include <stdlib.h>
void printArray(int *, int );
void findSumOfEvenOdd(int *, int);


int main()
{
    int size;
    printf("Enter Size of an Array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter Array: \n");
    for(int i = 0; i < size; i++)
        scanf("%d",&array[i]);

    findSumOfEvenOdd(array, size);

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

void findSumOfEvenOdd(int *arr, int size)
{
    int sumOfEven = 0, sumOfOdd = 0;

    for(int i = 0; i < size; i++)
    {
        if(i%2 == 0)
         sumOfEven += arr[i];
        else
            sumOfOdd += arr[i];
    }

    printf("Sum of Even Index is %d\n", sumOfEven);
    printf("Sum of Odd Index is %d\n", sumOfOdd);
}
