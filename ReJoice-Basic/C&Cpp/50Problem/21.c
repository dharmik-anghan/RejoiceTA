// 21. Write a program that takes a string as input and checks whether it is an anagram of another string.
/*
XOR for same it will give 0 and for diffrent 1;
'a'^'a' = 0;
97^97 = 0;
if 'a'^'c' = 2;
97^99 = 2;
*/
#include<stdio.h>
#include<string.h>
int isAnagram(char *,char *);
int main()
{
    char *str1 = "dharmik";
    char *str2 = "mkhraid";
    

    
    if(isAnagram(str1,str2))
    	printf("is Anagram");
    else
    	printf("not Anagram");    
    
    return 0;
}

int isAnagram(char *str1,char *str2)
{
	int answer = 0;
    
    if(strlen(str1) != strlen(str2))
    	return 0;
        
    for(int i = 0;i < strlen(str1); i++)
    {
        
    	answer = answer^(str1[i]^str2[i]);
    }
    if(answer == 0)
    	return 1;
    else
    	return 0;   
}