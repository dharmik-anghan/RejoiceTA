// 27. Write a program that takes a string as input and checks whether it is a valid email address.

/*
check for @ and .
*/
#include <stdio.h>
#include <string.h>

int main()
{
    // char *str = {"dharmikanghan09@gmail.com"};
    // char *str = {"dharmikanghan09gmail.com"};

    char email[100];
    printf("Enter MailID: ");
    scanf("%[^\n]", email);

    if(strstr(email, "@gmail.com") != 0)
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}