// 23. Write a program that takes a string as input and counts the number of words in it.

/*
if there is one space that means there are 2 words in it;
use flag variable to track there is no 2 space

and word variable for traking words in string and initialize with 1 becasue there is always space+1 words.
*/

#include <stdio.h>
#include <string.h>
int countWords(char *);

int main()
{
    // char *str = "Hi,    I'm   Dharmik.";
    // char *str = "Hi,I'mDharmik.";
    char *str = "Hi, I'm Dharmik.";

    int words = countWords(str);

    printf("Words in String are %d", words);

    return 0;

}

//count words in string and return integer
int countWords(char *str)
{
    int word = 1, flag = 0;

    for(int i = 0; i < strlen(str); i++)
    {
        if(flag == 0 && str[i] == ' ')
        {
            word++;
            flag = 1;
        }
        else if(flag == 1 && str[i] != ' ')
        {
            flag = 0;
        }
    }
    return word;
}