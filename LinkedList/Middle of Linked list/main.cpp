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

// Find middle of a given linked list
// Method 1: Iterate through the given list and count the number of nodes. Then return the node at count/2.
// Method 2: Traverse linked list using two pointers. Move one pointer by one and other pointer by two.
// When the fast pointer reaches end slow pointer will reach middle of the linked list.

void printMiddle()
{
    node* slowptr= A;
    node *fastptr= A;
    if(A!= NULL)
    {
        while(fastptr!= NULL && fastptr->next!= NULL)
        {
            fastptr= fastptr->next;fastptr= fastptr->next;
            slowptr= slowptr->next;
        }
        cout<<slowptr->data<<endl;
    }
}

// Complexity:
// Method1: O(n)
// Method2: O(n/2)

int main() {
    int n; cin>>n;
    for (int i=0; i<n; i++)
    {
        int x; cin>>x;
        insert(x);
    }
    printLL(A);
    printMiddle();
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}