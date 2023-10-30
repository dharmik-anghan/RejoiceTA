// 42. Write a program that takes an array of integers as input and finds the kth smallest element using pointers.

/*
take input
sort the array, so that array[0] will be smallest element and by that can find kth smalelst value
*/

#include <stdio.h>
#include <stdlib.h>
void sort(int*, int);

int main()
{
    
    int size;
    printf("Enter Size of Array: ");
    scanf("%d", &size);

    printf("Enter Array: ");
    int *array = (int*)malloc(size*(sizeof(int)));//memory allocation
    for(int i = 0; i < size; i++)
        scanf("%d",&array[i]);
    
    sort(array, size);

    int k;
    while(1)
    {
        printf("FOR EXIT ENTER -1");
        printf("\nEnter kth smallest value: ");
        scanf("%d", &k);
        if(k == -1)
            break;
        printf("%dth smallest value is %d", k, array[k-1]);
    }
    return 0;
}

void sort(int *array,int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}