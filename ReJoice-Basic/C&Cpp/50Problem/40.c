// 40. Write a program that takes a string as input and converts it to title case (capitalizing the first letter of each word) using pointers.

/*
We'll look for space, 
after space if character is betwwen 'a' to 'z' make that capital 
*/

#include <stdio.h>
#include <string.h>
void makeItTitle(char *);

int main()
{
    int size = 100;
    char str[size];
    printf("Enter String: ");
    scanf("%[^\n]s", str);

    makeItTitle(str); 

    printf("%s\n",str);

    return 0;
}

void makeItTitle(char *str)
{
    int flag = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        str[0] = str[0] - 32;
        if(str[i] == ' ' && flag == 0)
        {
            if(str[i+1] >= 'a' && str[i+1] <= 'z')
            {
                str[i+1] = str[i+1] - 32;
            }
            flag = 1;
        }
        else if(str[i] != ' ' && flag == 1)
            flag = 0;
    }
    printf("%s", str);
}