// 19.Write a program that takes a string as input and converts it to uppercase.
/*
can use ascii or string.h duction strupr a = 97, A = 65, a-A = 32

so, if i do a-32 = 65 == 'A'
*/

#include <stdio.h>
#include <string.h>

void toUpper(char*);

int main()
{
    char *str;
    printf("Enter String: ");
    scanf("%[^\n]s", str);


    printf("User Input: %s\n", str);
    toUpper(str);
    printf("Upper Case: %s", str);

    return 0;
}

//change string to upper case
void toUpper(char *str)
{
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i]-32;
        }
    }
}