// 36. Write a program that takes an array of integers as input and finds the maximum element using pointers instead of array indexing.

/*
take first element in variable max;
and compare to other elements and update the max valule;
*/

#include <stdio.h>
void maxEle(int *);

int main()
{
    int array[10] = {34,546,76,32,1,7,9,23,45,645};

    maxEle(array);
    return 0;
}
//find max element in array
void maxEle(int *array)
{
    int max = array[0];

    for(int i = 1; i < 10; i++)
    {
        if(max < *(array+i))
        {
            max = *(array+i);
        }
    }

    printf("max element in array is %d\n", max);
}