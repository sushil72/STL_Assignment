//Segregate even and odd nodes in a Linked List using Deque.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
};

node * push(node * head, int val)
{
    node * temp=new node();
    temp->data=val;
    temp->next=NULL;
    if(head==NULL)
    head=temp;
    else
    {
        node *t=head;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=temp;
    }
    return head;
}

void printList(node *head)
{
    if(head==NULL)
    return;
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" ->";
        t=t->next;
    }
}

node* segregate(node *head )
{
    node *temp=head;
    deque<int> dq;
    if(head==NULL)
    return 0;
    
        while(temp!=NULL)
        {
            if(temp->data%2==0)
            dq.push_front(temp->data);
            else
            dq.push_back(temp->data);
            temp=temp->next;
        }
temp=head;
    while (!dq.empty())
    {
        temp->data=dq.front();
        dq.pop_front();
        temp=temp->next;
    }
    
    return head;
   
}


int main()
{
        node *head=NULL;
        head=push(head,10);
        head=push(head,21);
        head=push(head,33);
        head=push(head,40);
        head=push(head,51);
        head=push(head,60);
        printList(head);
    cout<<"\nAfter Reaarangement"<<endl;
    head=segregate(head);
    printList(head);

return 0;
}
