// 37. Write a program that takes a string as input and counts the number of occurrences of a given character using pointers.
/*
take string;
make an array of 0 to 25, if we got A we'll increase array[0]++;
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter String: ");
    gets(str);
    int array[26] = {0};

    //increase values on index if we get char
    int x;
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            x = str[i]-65;
            array[x]++;
        }
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            x = str[i]-97;
            array[x]++;
        }
    }

    //print number of time char repeats 
    for(int i = 0; i < 26; i++)
    {
        if(array[i] != 0)
        {
            printf("%c = %d\n", i+'A', array[i]);
        }
    }

    return 0;
}