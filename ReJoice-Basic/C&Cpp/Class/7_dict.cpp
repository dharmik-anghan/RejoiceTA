//Problem: Implement a dictionary with key-value pairs and perform basic operations like adding, updating, and deleting entries.

/*
class Dictionary{
    string key;
    string word;

    adding function//
    deleteing fuction//
    updating function//
};
*/
#include <iostream>
#include <string>
using namespace std;

class Dictionary{
    private:
        string key;
        string word;
    public:
        Dictionary(){
            key = "";
            word = "";
        }
        //add dictionary word
        void addWord(string key,string word)
        {
            this->key = key;
            this->word = word;
        }
        //update dictionary
        void updateDictionary(string key, string word)
        {
            if(this->key == key){
                this->key = key;
                this->word = word;
            }
        }
        //delete dictioney key and word
        void deleteDictionary(string key)
        {
            if(this->key == key){
                this->key = "";
                this->word = "";
            }
        }
        //print dictionary word
        void printDictionary()
        {
            
            if(this->key != ""){
                cout<<"Key = " << key << ", Word = " << word << endl;
            }
        }
};

int main()
{
    cout<<"How many words you want to add?";
    int size;
    cin>>size;

    Dictionary d[size];
    string key, word;
    
    //add words
    fflush(stdin);
    for(int i = 0; i < size; i++){
        cout<<"What's Key? ";
        cin>>key;
        cout<<"What's Answer? ";
        cin>>word;
        d[i].addWord(key, word);
    }

    int choice;
    while (1)
    {
        cout<<endl<<"Choose Action: ";
        cout<<endl<<"1. Update key and word in dictionary ";
        cout<<endl<<"2. Delete key and word from dictionary ";
        cout<<endl<<"3. Print all words ";
        cout<<endl<<"4. Exit ";
        
        cout<<endl<<"Enter Choice: "<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            fflush(stdin);
            cout<<"Which key wants to update? ";
            cin>>key;
            cout<<"Answer? ";
            cin>>word;
            for(int i = 0; i < size; i++){
                d[i].updateDictionary(key, word);
            }
            break;
        case 2:
            fflush(stdin);
            cout<<"Enter Key: ";
            cin>>key;
            for(int i = 0; i < size; i++){
                d[i].deleteDictionary(key);
            }
            break;
        case 3:
        cout<<"-------------------------------------"<<endl;
            for(int i = 0; i < size; i++){
                d[i].printDictionary();
            }
        cout<<"-------------------------------------"<<endl;
            break;
        case 4:
            exit(0);
        
        default:
            cout<<"Enter Correct Option!!!"<<endl;
        }
    }
    
    

    return 0;
}
