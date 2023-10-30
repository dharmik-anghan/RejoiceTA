//Create a class called Stack with member functions to push, pop, and display elements. Implement the stack using an array or a linked list. Instantiate a Stack object, perform push and pop operations, and display the elements in the stack.

#include <iostream>
using namespace std;

class Node{
    public:
        Node *next;
        int data;

        Node(){
            next = NULL;
            data = 0;
        }
        Node(int data){
            next = NULL;
            this->data = data;
        }
};

class Stack
{
    private:
        Node *head;
    public:
        Stack(){
            head = NULL;
        }

        void push(int v)
        {
            Node *temp = new Node();
            temp->data = v;
            if(head == NULL)
            {
                head = temp;
            }
            else
            {
                Node *t = head;

                while(t->next != NULL)
                {
                    t = t->next;
                }
                t->next = temp;
            }
        }

        void pop()
        {
            if (head == NULL) {
                cout << "\nStack is Empty!!!\n";
                return;
            }
            if (head->next == NULL) {
                delete head;
                head = NULL;
                return;
            }
            Node *t = head;

            while(t->next->next != NULL)
            {
                t = t->next;
            }
            Node *temp = t->next;

            t->next = NULL;
            delete temp;
        }

        void display()
        {
            if(head == NULL)
            {
                cout<<"\nStack is Empty!!!\n";
                return;
            }
            Node *t = head;
            cout<<endl;
            while(t != NULL)
            {
                cout<<t->data<<" < ";
                t = t->next;
            }
            cout<<endl;
        }
};

int main()
{
    Stack s;

    int choice, i;
    while(1)
    {
        cout<<"\n1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Disply\n";
        cout<<"4. Exit\n";
        cout<<"\nEnter Your Choice\n";
        cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"Enter Number: ";
            cin>>i;
            s.push(i);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.display();
            break;
        case 4:
            exit(0);
        
        default:
            break;
        }
        


    }

    



    return 0;
}