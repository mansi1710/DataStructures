#include <iostream>

using namespace std;

// Program for n’th node from the end of a Linked List
// Method 1:
// Traverse till the end of the list to find its length. Time complexity: O(l)
// Print (l-n+1)th node


// Method 2: Two pointer
// Take two pointers main & ref both initially pointing towards head pointer
// Increment reference pointer till it reaches nth node
// Now increment both pointer by one till the reference pointer reaches the end
// Now the main pointer points to the nth node from the end
// Time complexity: O(l)

struct node{
    int data;
    node* next;
};

struct node* insert(struct node* A, int data)
{
    if(A== NULL)
    {
        node * temp= new node();
        temp->data= data;
        temp->next= NULL;
        A= temp;
    }
    else{
        node* temp= new node();
        temp->data= data; temp->next= NULL;
        node* temp1= A;
        while(temp1->next!= NULL)
            temp1= temp1->next;
        temp1->next= temp;
    }
    return A;
}

void printLL(node * temp1)
{
    while(temp1->next != NULL)
    {
        cout<<temp1->data;
        temp1= temp1->next;
    }
    cout<<temp1->data;
}

void printLast(struct node * A, int n)
{
    struct node* ref= A;
    struct node* main= A;
    int count=0;
    if(ref != NULL)
    {
        while(count<n-1)
        {
            ref= ref->next; count++;
        }
    }
    while(ref->next != NULL)
    {
        ref= ref->next;
        main = main->next;
    }
    cout<<main->data;
}

int main()
{
    struct node * A= NULL;
    A= insert(A, 1);
    A= insert(A, 2);
    A= insert(A, 3);
    A= insert(A, 4);
    A= insert(A, 5);
    //printLL(A);
    printLast(A, 1);
    return 0;
}