#include<iostream>
using namespace std;

class Node
{
    public:
    Node* prev;
    int data;
    Node* next;

    void traversal(Node* head);
    void preTraversal(Node* last);
};

void Node :: traversal(Node* head)
{
    Node* ptr = head;

    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

void Node :: preTraversal(Node* last)
{
    Node* ptr = last;

    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->prev;
    }
    cout<<endl;
}

int main()
{
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->prev = NULL;
    head->data = 5;
    head->next = first;

    first->prev = head;
    first->data = 10;
    first->next = second;

    second->prev = first;
    second->data = 15;
    second->next = third;

    third->prev = second;
    third->data = 20;
    third->next = NULL;

    Node n;
    n.traversal(head);
    n.preTraversal(third);

    return 0;
}