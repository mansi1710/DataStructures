#include <iostream>
#include <cmath>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct node{
    int data;
    node* next;
};
node *A;        //head node

//Insert element at the end of the linked list
// Time complexity : O(n)
// Space complexity : O(n)

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

// Traverse through the linked list and print values
// Time complexity : O(n)
// Space complexity :O(n)

void printLL(node * temp1)
{
    while(temp1->next != NULL)
    {
        cout<<temp1->data;
        temp1= temp1->next;
    }
    cout<<temp1->data;
}

// complexity: best case: O(1)
// worst case O(n) delete from end of linked list

void deleten(int x)
{
    node* temp1= A; int i;
    for(i=1; i<x-1; i++)
    {
        temp1= temp1->next;
    }
    node *temp2;
    temp2= temp1->next;
    temp1->next=  temp2->next;
}

// complexity : best case O(1) add node at head position
// worst case O(n) add at end

void insertn(int data, int n)
{
    node * temp1= new node(); // new node() creates a new struct node and returns its pointer
    temp1->data= data;
    node * temp;
    temp= A; int i;
    for(i=1; i<n-1; i++)
    {
        temp= temp->next;
    }
    temp1->next= temp->next;
    temp->next= temp1;
}

// sort a linked list. Merge sort is used
// because of slow random access quick sort becomes difficult and heap sort becomes impossible

//Divide the linked list into two halves
// FrontBackSpilt(head, &a, &b)
// Sort two halves
// MergeSort(a)
// MergeSort(b)
// Merge the sorted a & b using SortMerge(a, b);
int length(node * ptr)
{
    int count=0;
    while(ptr->next!= NULL){
        ptr= ptr->next;
        count++;
    }
    count++;
    return count;
}

int main()
{
    A= NULL;
    int i, x; int n; cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        insert(x);
    }
    printLL(A);cout<<"\n";
    insertn(8, 3);
    printLL(A);cout<<"\n";
    deleten(1);
    printLL(A);
    return 0;
}