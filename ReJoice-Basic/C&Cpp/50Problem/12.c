// 12. Write a program that takes a string as input and counts the number of vowels and consonants in it.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("Enter String: ");
    char str[100];
    scanf("%[^\n]s", &str);

    int size = strlen(str);

    int vowels = 0, consonants = 0;

    for(int i = 0; i < size; i++)
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowels++;
        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            consonants++;
    }

    printf("Vowels     = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}