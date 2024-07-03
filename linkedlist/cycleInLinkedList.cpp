/*
if the next of 2 nodes points to the same node then it is called cycle or loop in the linked list
this algorithm also called as haer and tortoise or floyed's algorithm

here we have two pointers hare and tortoise: as per the story hare runs fast and move two elements at a time while tortoise move 1 element at a time and then also both of then reaches at one common end then we can say that the cycle is present in linked list
*/

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

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startnode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}
bool detectcycle(node *&head)
{

    node *slow = head;
    node *fast = head;
    while (fast != NULL and fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
// for removing the cycle place any one pointer to head(fast) then increment both of them by one element if the next of both the pointer points to same node then, point the next of slow pointer to NULL
void removeCycle(node *&head)
{
    node* slow=head;
    node* fast=head;
    //we have to check if the slow==fast, initially they are same so using do while loop
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);

    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
    
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtHead(head, 2);
    insertInBetween(head, 3, 2);
    insertInBetween(head, 4, 1);
    makeCycle(head, 2);
    cout << detectcycle(head)<<endl;
    removeCycle(head);
    cout << detectcycle(head)<<endl;
    displayList(head);

    return 0;
}