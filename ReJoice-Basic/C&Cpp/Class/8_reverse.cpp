//Problem: Create a program to reverse a string without using any built-in library functions.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class ReverseString
{
    private:
        string s;
    public:
        ReverseString(){ s = "";}
        ReverseString(string s){
            this->s = s;
        }

        void reverseStr(){
            reverse(s.rbegin(), s.rend());
            cout<<s;
        }
};

int main()
{
    ReverseString s1("Dharmik");

    s1.reverseStr();
    return 0;
}