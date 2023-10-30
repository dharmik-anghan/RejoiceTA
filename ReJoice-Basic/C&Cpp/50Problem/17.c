//17. Write a program that takes an array of integers as input and removes all the duplicate elements from the array.
#include <stdio.h>
#include <limits.h>

int main()
{   
    int size = 10;
    int array[10] = {3,6,23,6,5,3,23,7,5,2};

    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if((i != j) && (array[i] == array[j]))
            {
                array[j] =  INT_MIN;
            }
        }
    }

    for(int i = 0; i < size; i++)
    {
        if(array[i] != INT_MIN)
        {
            printf("%d ", array[i]);
        }
    }

    return 0;
}

/*
if value repeats put INT_MIN and when printing ignore if array[i] has INT_MIN
to use INT_MIN include limit.h 
*/