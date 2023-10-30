// 38. Write a program that takes two integers as input and swaps their values using pointers.

/*
give two value to function and swap the value
*/

#include <stdio.h>
void swap(int*, int*);
int main()
{
    int a = 50, b = 100;

    printf("Before Swap\na = %d\nb = %d\n", a,b);
    swap(&a, &b);
    printf("After Swap\na = %d\nb = %d\n", a,b);

    return 0;
}

void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}