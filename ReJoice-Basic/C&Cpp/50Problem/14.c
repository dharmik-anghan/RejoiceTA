// 14. Write a program that takes a string as input and reverses it.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("Enter String: ");
    char str[100];
    scanf("%[^\n]s", &str);

    int size = strlen(str)-1;

    char *revStr = (char*)(malloc(size*sizeof(char))); //using malloc
    int j = 0;
    for(int i = size; i >= 0; i--)
    {
        revStr[j] = str[i];
        j++;
    }
    revStr[j] = '\0';

    printf("Real String = %s\n", str);
    printf("Reverse String = %s\n", revStr);
    printf("Length= %d\n", strlen(str));
    printf("RevStr Length= %d\n", strlen(revStr));

    free(revStr); //If you allocated memory release it

    return 0;
}