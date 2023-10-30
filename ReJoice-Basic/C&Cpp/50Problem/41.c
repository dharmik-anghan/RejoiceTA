// 41. Write a program that takes two strings as input and checks whether one string is a substring of the other using pointe

/*
take 2 string s1 and s2;
while whichever strring is smaller run till that index with condition; 
need flag variable to watch the string;
*/

#include <stdio.h>
#include <string.h>
int isSubString(char *, char*);
int main()
{
    char str1[50] = "anghandharmik";
    char str2[50] = "dhamik";

    int subStr = isSubString(str1,str2);

    if(subStr != -1)
        printf("Present at Index %d\n", subStr);
    else
        printf("Not a subString.\n");

    return 0; 
}

int isSubString(char *s1, char *s2)
{
    int m = strlen(s1);
    int n = strlen(s2);
    if(m<n)
        return isSubString(s2,s1);
    
    int i = 0, j = 0;

    while(i < m)
    {
        if(s1[i] == s2[j])
        {
            if(j == n-1)
                return i-j;
            j++;
        }
        else
            j = 0;
        i++;
    }

    return -1;
}