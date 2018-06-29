#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

struct node{
    int data;
    node* next;
};

struct node* insert(struct node* A, int x)
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
    return A;
}

struct node* merge(struct node* a, struct node * b)
{
    node* dummy= new node();
    while(1)
    {
        //cout<<"1";
        if(a== NULL)
        {
            while(b!= NULL)
            {
                insert(dummy, b->data);
                b=b->next;
            }
            break;
        }
        else if(b == NULL)
        {
            while(a!= NULL)
            {
                insert(dummy, a->data);
                a= a->next;
            }
            break;
        }
        else if(a->data<= b->data)
        {
            insert(dummy, a->data);
            a= a->next;
        }
        else
        {
            insert(dummy, b->data);
            b=b->next;
        }
        //cout<<dummy->data<<" ";
    }
    return dummy;
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


int main() {
    node* A= new node();
    node* B= new node();
    node* C= new node();
    for(int i=0; i<3; i++){
        int x; cin>>x;
        cout<<x;
        A= insert(A, x);
    }
    for(int i=0; i<3; i++){
        int x; cin>>x;
        B= insert(B, x);
    }
    C=  merge(A, B);
    printLL(B);
    printLL(A);
    printLL(C);
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}