#include <iostream>
#include <queue>

using namespace std;

struct node{
    int data;
    node* left; node* right;
};

node* NewNode(int data)
{
    node* temp= new node();
    temp->data= data;
    temp->left= temp->right= NULL;
    return temp;
}

void level_order(node* root)
{
    queue <node*> q;
    if(root!= NULL) q.push(root);
    while(!q.empty())
    {
        node* current= q.front(); q.pop();
        cout<<current->data<<" ";
        if(current->left!= NULL) q.push(current->left);
        if(current->right!= NULL) q.push(current->right);
    }
    cout<<endl;
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
    struct node *root  = NULL;
    root = NewNode(1);
    root->left        = NewNode(2);
    root->right       = NewNode(3);
    root->left->left  = NewNode(4);
    root->left->right = NewNode(5);
    level_order(root);

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}