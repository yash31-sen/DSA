/*
tree is a non linear data structure in which one node (parent node) may be liked with more than one nodes which is not poosible in data structures like linked list.

tree is hirarchichal data strucutre

in binary tree the parent node is connected only with 2 or less than 2 children nodes

a tree having multiple childs or more than 2 childs is called as n-ary tree
and these childs are stored inside a list like ds(bcz it's not possible to store multiple nodes with variables)


there are multiple ways to traverse the tree
1)level order traversal(breadth first traversal)
    space complexity O(n) in all cases bcz using queue to store elements  [for recursive approach]
    for stack based iterative approach  O(h)  h=height of tree
2)pre order traversal(depth first traversal)
    space complexity: worst case O(n) -> tree unbalanced, best case (log(n))-> tree balanced
    for stack based iterative approach  O(h)  h=height of tree
    rest same for all
3)in order traversal(depth first traversal)

4) opst order traversal(depth first traversal)
all the traverasals have complexity of O(n)   bcz every node is visited once
*/

#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "enter data: ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data to insert in the left of " << data << ": ";
    root->left = buildTree(root->left);
    cout << "Enter data to insert in the right of " << data << ": ";
    root->right = buildTree(root->right);
}

// ↓
void inorder(node *root)

{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}
// <-
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}
//->
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{
    node *root = NULL;
    buildTree(root);
    inorder(root);
};
