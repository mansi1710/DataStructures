#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node* left, *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

// Time complexity to find maximum depth: O(n)

int maxDepth(struct node* node)
{
    if (node== NULL) return 0;
    else
    {
        int ldepth= maxDepth(node->left);
        int rdepth= maxDepth(node->right);

        return max(ldepth+1, rdepth+1);
    }
}

// Tree traversal
void postorder(struct node* node)
{
    if(node== NULL) return;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}

void inorder(struct node* node)
{
    if(node== NULL) return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}

void preorder(struct node* node)
{
    if(node== NULL) return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}

int main() {
    struct node *root = new node(1);
    root->left             = new node(2);
    root->right         = new node(3);
    root->left->left     = new node(4);
    root->left->right = new node(5);

    cout << "\nPreorder traversal of binary tree is \n";
    preorder(root);

    cout << "\nInorder traversal of binary tree is \n";
    inorder(root);

    cout << "\nPostorder traversal of binary tree is \n";
    postorder(root);

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}