#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

struct node{
    int data;
    node* next;
};
node *A;        //head node

void insert(int x)
{
    if(A== NULL)
    {
        node* temp= new node();
        temp->data= x;
        temp->next= NULL;
        A= temp;
    }
    else if (A!= NULL)
    {
        node* temp= new node();
        temp-> data = x;
        temp->next= NULL;
        node *temp1= A;
        while(temp1->next!= NULL)
            temp1= temp1->next;
        temp1->next= temp;
    }
}
void printLL(node * temp1)
{
    while(temp1->next != NULL)
    {
        cout<<temp1->data<<" ";
        temp1= temp1->next;
    }
    cout<<temp1->data<<"\n";
}

// Function to reverse a linked list
// Time Complexity:
// Space Complexity:

void reverse()
{
    node* curr= A;
    node* prev= NULL; node* next = NULL;
    while(curr!= NULL)
    {
        next= curr->next;
        curr->next= prev;
        prev= curr;
        curr= next;
    }
    A= prev;
}

int main() {
    int n; cin>>n;
    for (int i=0; i<n; i++)
    {
        int x; cin>>x;
        insert(x);
    }
    reverse();
    printLL(A);
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}