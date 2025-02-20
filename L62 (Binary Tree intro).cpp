#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node* root)
{
    cout << "Enter the data for node " << endl;
    int data ;
    cin >> data ;

    root = new node(data);

    if (data == -1){
        return NULL ;
    }

    // root k left mai daalo
    cout << "Enter data for inserting in left " << endl;
    root -> left = buildTree(root->left);

    cout << "Enter data for inserting in right " << endl;
    root->right = buildTree(root->right);

    return root ;
}

int main()
{
    node* root = NULL ;

    // creating a tree
    root = buildTree(root);

    return 0 ;
}