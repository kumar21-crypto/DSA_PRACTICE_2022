#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node* createnode(int data);
    void postorder(Node* p);
};

Node* Node :: createnode(int data)
{
    Node* ptr = new Node();
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;

    return ptr;
}

//        4
//       / \
//      1   6
//     / \   
//    5   2

//  left -> right -> root

void Node :: postorder(Node* p)
{
    if(p!=NULL)
    {
        postorder(p->left);
        postorder(p->right);
        cout<<p->data<<" ";
    }
}

int main()
{
    Node n;

    Node* p1 = n.createnode(4);
    Node* p2 = n.createnode(1);
    Node* p3 = n.createnode(6);
    Node* p4 = n.createnode(5);
    Node* p5 = n.createnode(2);
    

    p1->left = p2;
    p1->right = p3;

    p2->left = p4;
    p2->right = p5;

    n.postorder(p1);

    
   return 0;
}