//25. Write a program that takes a string as input and removes all the spaces from it

/*
    give memory to newstring array and then if we find space, we will skip that char
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char *str = "hi,   Dharmik here.";
    int len = strlen(str)-1;

    char *newString = (char*)(malloc(len*sizeof(char)));

    int j = 0;
    for(int i = 0; i < len; i++)
    {
        if(str[i] != ' ')
        {
            newString[j] = str[i];
            j++;
        }
    }
    newString[++j] = '\0';

    printf("%s", newString);

    free(newString);  

    return 0;
}