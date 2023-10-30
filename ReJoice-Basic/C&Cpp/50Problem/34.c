// 34. Write a program that takes two strings as input and checks whether one is a rotation of the other.

/*
str1 = "dharmik";
str2 = "rmikdha";

use while loop and compare each word;
str1[i] == str2[j];...
increase j till we find str1[0];
if j == strlen(str2)-1 then, j = 0;
need FLAG variable, if comparison break in between fla will be updated
*/

#include <stdio.h>
#include <string.h>

int main()
{   
    char str1[50] = "dharmik";
    char str2[50] = "rmikdha";

    int i = 0, j = 0, flag = 0;
    while(i < strlen(str1))
    {
        if(str1[i] == str2[j])
        {
            
        }
    }
    

    return 0;
}