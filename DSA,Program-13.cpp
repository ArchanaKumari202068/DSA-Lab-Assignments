//Program-13: Write a program to implement all the tree traversal methods using classes.



#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

//PostOrder
void printPostorder(class Node* node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);

    printPostorder(node->right);

    cout << node -> data << " ";
}

// Inorder
void printInorder(class Node* node)
{
    if (node == NULL)
        return;

    printInorder(node->left);

    cout << node->data << " ";

    printInorder(node->right);
}
//PreOrder
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";

    printPreorder(node->left);

    printPreorder(node->right);
}

int main()
{
    class Node* root = new Node(11);
    root->left = new Node(12);
    root->right = new Node(13);
    root->left->left = new Node(14);
    root->left->right = new Node(15);

    cout << "\n\tPreorder traversal of tree is \n\t";
    printPreorder(root);

    cout << "\n\tInorder traversal of  tree is \n\t";
    printInorder(root);

    cout << "\n\tPostorder traversal of tree is \n\t";
    printPostorder(root);

    return 0;
}
