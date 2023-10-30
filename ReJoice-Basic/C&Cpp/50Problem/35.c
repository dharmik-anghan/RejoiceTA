// 35. Write a program that takes an array of integers as input and finds the majority element (the element that appears more than n/2 times, where n is the size of the array).

/*
Take an array;
integer flag = 0;
2 for loop;
take array[0] compare how many times values comes, and if value is =to array[0], do falg++ and store I;
*/

#include <stdio.h>

int main()
{
    int array[10] = {4,5,4,6,4,4,12,4};
    int size = sizeof(array)/sizeof(int);

    //checking... which element in array comes how many times...
    int max, flag1;
    for(int i = 0; i < size; i++)
    {
        int flag = 0;
        for(int j = 0; j < size; j++)
        {
            if(array[i] == array[j] && i!=j)
            {
                flag++;
                if(flag > flag1)
                {
                    max = i;
                    flag1 = flag;
                }
            }
            

        }
    }
    //print the answer
    if(flag1 >= (size-1)/2)
        printf("%d has appears %d times\n", array[max], flag1+1);
    else
        printf("There no majority elements\n");

    return 0;
}