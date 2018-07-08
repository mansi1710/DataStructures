#include <iostream>

using namespace std;

struct node{
    int data;
    node* prev;
    node* next;
};
struct node* head;

struct node* GetNewNode(int data)
{
    node* temp= new node();
    temp->data= data;
    temp->next= NULL;
    temp->prev= NULL;
    return temp;
}

void insertHead(int x)
{
    node* temp= GetNewNode(x);
    if(head== NULL){
        head= temp; return;
    }
    else
    {
        head->prev= temp;
        temp->prev= NULL;
        temp->next= head;
        head= temp;
        return;
    }
}

void print(){
    struct node* temp= head;
    while(temp!= NULL)
    {
        cout<<temp->data;
        temp= temp->next;
    }
    cout<<endl;
    return;
}

void reverse_print()
{
    struct node* temp= head;
    while(temp->next != NULL)
    {
        temp= temp->next;
    }
    while(temp!= NULL)
    {
        cout<<temp->data;
        temp= temp->prev;
    }
    cout<<"\n";
    return;
}

void insertTail(int data)
{
    node * temp= GetNewNode(data);
    if(head== NULL)
    {
        head= temp; return ;
    }
    else{
        struct node* temp1= head;
        while(temp1->next!= NULL)
        {
            temp1= temp1->next;
        }
        temp->prev= temp1;
        temp1->next= temp;
        return;
    };
}

int main() {
    head= NULL;
    insertHead(2);
    insertHead(3);
    insertHead(4);
    insertTail(1);
    print();
    reverse_print();
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}