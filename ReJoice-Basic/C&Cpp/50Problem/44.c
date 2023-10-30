// 44. Write a program that takes a string as input and checks whether it is a palindrome or not.

/*
what's the palindrome? ----->   MOM == MOM when you check from start its same as you check from end to start. Like DAD

So, we need to compare first half to other half. 
can use for loop, first will start from 0 and second will start from strlen()-1, and we will stop if i == j or size/2;

*/

#include <stdio.h>
#include <string.h>
int isPalindrome(char*);

int main()
{
    char str[100];
    printf("Enter String To Check Palindrome: ");
    scanf("%[^\n]s", str);

    if(isPalindrome(str))
        printf("%s is palindrome", str);
    else
        printf("%s is not palindrome", str);
    
    return 0;
}

//fuction to check palindrome
int isPalindrome(char *str)
{
    int size = strlen(str);
    int j = size-1;
    for(int i = 0; i < size/2; i++)
    {
        if(str[i] != str[j])
            return 0; // Not a palindrome if characters don't match
        j--;

    }
    return 1; // Palindrome if all characters match
}