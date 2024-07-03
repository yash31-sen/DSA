#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertNode(node *&tail, int elem, int data)
{
    if (tail == NULL)
    {
        node *n = new node(data);
        tail = n;
        n->next = n;
    }
    else
    {
        node *temp = tail;
        while (temp->data != elem)
        {
            temp = temp->next;
        }
        // 0->0->0->0->0->
        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void deleteNode(node* &tail,int val){
if(tail==NULL){
    cout<<"No data in list can't delete anything.";
}
else{
    node*& prev= tail;
    node* cur=prev->next;

    while(cur->data!=val){
        prev= cur;
        cur=cur->next;

    }
    prev->next=cur->next;
    if(cur==prev){//single element
        tail=NULL;
    }
    if(tail==cur){//>2 elem
        tail=prev;
    }
    cur->next=NULL;
    delete cur;
}
}

void printList(node * tail)
{
    node *temp = tail;
if(tail==NULL){
    cout<<"nothing to print.";
    return;
}
    // while(tail->next!=temp){
    //     cout<<temp->data<<">";
    //     temp=temp->next;
    // }////if there is only one element in the list it will not print it so better to use the do whle loop

    do
    {
        cout << tail->data << "->";
        tail = tail->next;
    } while (tail != temp);
}
int main()
{

    node *tail = NULL;

    insertNode(tail, 2, 1);
    insertNode(tail, 1, 5);
    insertNode(tail, 5, 15);
    deleteNode(tail,5);
    printList(tail);

    return 0;
}