//Create a class called BinarySearchTree with member functions to insert and search for elements in the tree. Implement the tree using dynamic memory allocation. Instantiate a BinarySearchTree object, insert elements, and search for a specific element.
#include <iostream>
using namespace std;

class BST
{
    private:
        int data;
        BST *left;
        BST *right;
    public:
        BST(int v){
            data = v;
            left = NULL;
            right = NULL;
        }

        BST* insert(int v)
        {
            if(this == NULL)
            {
                return new BST(v);
            }

            if(v > this->data)
            {
                this->right = this->right->insert(v);
            }
            else if(v <= this->data)
            {
                this->left = this->left->insert(v);
            }
            return this;
        }

        void inOrder()
        {
            if(this == NULL)
                return;
            this->left->inOrder();
            cout<<this->data<<" ";
            this->right->inOrder();
        }

        void search(int key)
        {
            if (this == NULL)
            {
                return;
            }
            else if (this->data == key)
            {
                cout << "Value found" << endl;
            }

            if (this->data < key)
                this->right->search(key);
            else
                this->left->search(key);
        }
};

int main()
{   
    BST *root = new BST(0);
    root->insert(1);
    root->insert(2);
    root->insert(3);
    root->insert(4);
    root->insert(5);

    root->inOrder();

    root->search(4);

    return 0;
}