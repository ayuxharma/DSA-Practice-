#include <iostream>
#include <queue>
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

node *buildTree(node *root)
{
    cout << "Enter the data for node " << endl;
    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    // root k left mai daalo
    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversel(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        { // purana level complete traverse hogya h
            cout << endl;
            if (!q.empty())
            { // queue still has some child nodes
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorderTraversal(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LNR
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // NLR
    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LRN
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node* &root)
{
    queue<node *> q;
    cout << "Enter the data for the root " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for : " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);

            cout << "Enter right node for : " << temp->data << endl;
            int rightData;
            cin >> rightData;

            if (rightData != -1)
            {
                temp->right = new node(rightData);
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    // node *root = NULL;

    // // creating a tree
    // root = buildTree(root);

    // // level order traversal
    // cout << "Printing the level order traversal output " << endl;
    // levelOrderTraversel(root);

    // cout << "Inorder Traversal is : ";
    // inorderTraversal(root);

    // cout << endl;

    // cout << "preorder Traversal is : ";
    // preorderTraversal(root);

    // cout << endl;

    // cout << "postorder Traversal is : ";
    // postorderTraversal(root);

    node* root = NULL;
    buildFromLevelOrder(root);

    cout << "Binary Tree is :" <<endl;
    levelOrderTraversel(root);

    return 0;
}

