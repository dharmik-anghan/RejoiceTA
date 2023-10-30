//Create a class called WordCounter with member variables for a string of text. Implement a function to count the occurrences of a specific word in the text. Instantiate a WordCounter object, set the text, and count the occurrences of a word.

#include <iostream>
#include <string>
using namespace std;

class WordCounter
{
    private:
        string s;
        int a[26] = {0};
    public:
        void setS(string s){
            this->s = s;
        }

        void countWord()
        {
            int word = 1;
            for(int i = 0; i < s.length(); i++)
            {
                if(s[i] >= 'A' && s[i] <= 'Z')
                    a[s[i]-65]++;
                else if(s[i] >= 'a' && s[i] <= 'z')
                    a[s[i]-97]++;
                if(s[i] == ' ' && s[i+1] != ' '){
                    word++;
                }
            }
            cout<<"There are "<<word<<" words"<<endl;
        }
        void occurrences()
        {
            char c;
            for(int i = 0; i < 26; i++)
            {
                if(a[i] != 0){
                    c = i+65;
                    cout<<c<<" = "<<a[i]<<endl;
                }
            }
        }
};

int main()
{   
    WordCounter w;

    w.setS("Hello, I'm Dharmik. Currently learning c/c++");

    w.countWord();
    cout<<endl;
    w.occurrences();

    return 0;
}