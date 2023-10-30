// 26. Write a program that takes two arrays of integers as input and finds the union and intersection of the arrays.

/*
2 sorted array;
to find union:
    compare first element of both array, print small element and do index i++;
    again if 2nd array element if greater do j++
    else if equal print any element and do i++, j++ 

*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void findUni(int*, int*, int, int);
void findIntersection(int *, int *, int, int);

int main()
{
    int s1 = 5;
    int a1[5] = {1,3,5,7,9};
    int s2 = 4;
    int a2[4] = {2,3,5,7};

    findUni(a1,a2,s1,s2);
    printf("\n");
    findIntersection(a1,a2,s1,s2);

    return 0;
}
//find union
void findUni(int *a1, int *a2, int s1, int s2)
{
    int i = 0, j=0;

    while(i < s1 && j < s2)
    {
        if(a1[i] < a2[j])
            printf(" %d ", a1[i++]);
        else if(a1[i] > a2[j])
            printf(" %d ", a2[j++]);
        else
        {
            printf(" %d ", a1[i++]);
            j++;
        }
    }

    while(i < s1)
        printf(" %d ", a1[i++]);
    while(j < s2)
        printf(" %d ", a2[j++]);
}

void findIntersection(int *a1, int *a2, int s1, int s2)
{
    int i = 0, j=0;

    while(i < s1 && j < s2)
    {
        if(a1[i] < a2[j])
            i++;
        else if(a1[i] > a2[j])
            j++;
        else
        {
            printf(" %d ", a1[i++]);
            j++;
        }
    }
}