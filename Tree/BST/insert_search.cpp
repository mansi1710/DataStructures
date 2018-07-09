#include <iostream>

using namespace std;

struct node {
    int data;
    node* left; node* right;
};

struct node* search(struct node* root, int data)
{
    if(root== NULL or root->data== data)
        return root;
    else if(root->data> data)
        return search(root->left, data);
    else if(root->data < data)
        return search(root->right, data);
}

struct node* NewNode(int data)
{
    struct node* temp= new node();
    temp->data= data;
    temp->right= temp->left= NULL;
    return temp;
}

struct node* insert(struct node* node, int data)
{
    if (node== NULL)
        return NewNode(data);
    else if(node->data <data)
        node->right= insert(node->right, data);
    else if(node->data > data)
        node->left= insert(node->left, data);
    return node;
}

void inorder(struct node* node)
{
    if(node != NULL)
    {
        inorder(node->left);
        cout<<node->data<<" ";
        inorder(node->right);
    }
}

int main() {
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // print inoder traversal of the BST
    inorder(root);
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}