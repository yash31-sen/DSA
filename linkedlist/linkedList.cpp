#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTail(node *&head, int data)
{
    node *n = new node(data);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(node *&head, int data)
{
    node *n = new node(data);
    n->next = head;
    head = n;
}

void insertInBetween(node *head, int data, int key)
{
    node *n = new node(data);
    node *temp = head;
    while (temp->data != key)
    {
        temp = temp->next;
    }
    node *temp1 = NULL;
    temp1 = temp->next;
    temp->next = n;
    n->next = temp1;
}

void displayList(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL";
}

node* revList(node* &head){
    node* prev=NULL;
    node* next;
    node* cur=head;

    while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;

    }
    return prev;
    
}

void deleteNode(node* &head, int pos) {
    if (pos == 1) {
        node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    } else {
        node* cur = head;
        node* prev = NULL;
        int cnt = 1;
        while (cnt < pos) {  // Correct the loop condition
            prev = cur;
            cur = cur->next;
            cnt++;
        }
        if (cur != NULL) {  // Ensure cur is not NULL
            prev->next = cur->next;
            cur->next = NULL;
            delete cur;
        }
    }
}

bool searchList(node *&head, int data)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == data)
        {
            return true;
            break;
        }
        temp = temp->next;
    }
    return false;
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtHead(head,2);
    insertInBetween(head, 3, 2);
    insertInBetween(head, 4, 1);
    displayList(head);
    cout<<endl;
    // deleteNode(head,4);
    // displayList(head);
    node* newhead=revList(head);
    displayList(newhead);
    // cout << endl
        //  << searchList(head, 45);
    return 0;
}