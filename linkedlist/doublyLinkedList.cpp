#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node *&head, int data)
{
    node *n = new node(data);
    // node* temp=head;
    n->next = head;
    head->prev = n;
    head = n;
}

void insertAtTail(node *&head, int data)
{
    node *n = new node(data);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    n->next = NULL;
}
// void insertInBetween(Node* &head, int val, int data) {
//     Node* n = new Node(data);
//     Node* temp = head;

//     // Find the node with the value 'val'
//     while(temp != NULL && temp->data != val) {
//         temp = temp->next;
//     }

//     // If the node with 'val' is not found, do nothing
//     if (temp == NULL) {
//         delete n;
//         return;
//     }

//     // Insert the new node after the node with value 'val'
//     n->next = temp->next;
//     n->prev = temp;

//     if (temp->next != NULL) {
//         temp->next->prev = n;
//     }

//     temp->next = n;
// }

node *deleteNode(node * &head, int pos)
{
    if (pos == 1)
    { // deletion at head
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *cur = head;
        node *prev = NULL;
        int cnt = 1;
        // 0->p0->c0->0->0
        while (cnt < pos)
        {
            prev = cur;
            cur = cur->next;
            cnt++;
        }
        cur->prev = NULL;
        prev->next = cur->next;
        cur->next = NULL;
    }
}

void insertInBetween(node *&head, int val, int data)
{
    node *n = new node(data);
    node *temp = head;
    while (temp->data != val)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    n->prev = temp;
    temp->next->prev = n;
    temp->next = n;
}
void displayList(node *head)
{
    node *temp = head;
    cout << "NULL" << "<-";
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
int main()
{
    node *head = new node(10);
    insertAtHead(head, 12);
    insertAtTail(head, 23);
    insertInBetween(head, 12, 11);
    insertInBetween(head, 11, 50);
    displayList(head);
    cout<<endl;
    deleteNode(head, 1);
    displayList(head);
}