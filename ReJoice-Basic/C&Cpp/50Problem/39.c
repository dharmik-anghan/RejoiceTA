// 39. Write a program that takes an array of integers as input and reverses the elements in the array using pointers.
/*
array = {1,2,3,4,5}
take newArray using malloc;
start taking elemenet from last to 0 and give those value to newArray
print old and new array
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10] = {34,56,76,32,1,7,9,23,45,68};
    int size = sizeof(array)/sizeof(int);
    int *newArray = (int*)malloc(size*sizeof(int));

    int i = 0,j = size-1;

    while(size > i)
    {
        newArray[i] = array[j];
        i++; 
        j--;
    }

    //print real and reverse array
    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);

    printf("\n");
    for(int i = 0; i < size; i++)
        printf("%d ", newArray[i]);


    return 0;
}