#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node* createnode(int data);
};

Node* Node :: createnode(int data)
{
    Node* ptr = new Node();
    ptr->data = data;
    ptr->left = NULL;
    ptr->right = NULL;

    return ptr;
}

int main()
{
    Node n;

    Node* p1 = n.createnode(2);
    Node* p2 = n.createnode(1);
    Node* p3 = n.createnode(4);
    Node* p4 = n.createnode(11);
    Node* p5 = n.createnode(3);
    Node* p6 = n.createnode(NULL);
    Node* p7 = n.createnode(5);

    p1->left = p2;
    p1->right = p3;

    p2->left = p4;
    p2->right = p5;

    p3->left = NULL;
    p3->right = p7;

    
   return 0;
}