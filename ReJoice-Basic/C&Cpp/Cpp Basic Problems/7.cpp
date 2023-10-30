// 7. Check whether a given string is a palindrome or not.

#include <iostream>
#include <cstring>
using namespace std;
int isPalindrome(string );
int main()
{
    string s;
    cout<<"Enter String: ";
    cin>>s;

    if(isPalindrome(s))
        cout<<"isPalindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}
int isPalindrome(string s)
{
    int i = 0, j = s.length()-1;

    for(int i = 0; i < s.length()/2;i++)
    {
        if(s[i] != s[j])
            return 0;
        j--;
    }
    return 1;
}
