#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    void traversal(Node* head);
};

void Node :: traversal(Node* head){
    Node* ptr = head;

    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<endl;
}

int main()
{
    Node* head = new Node();
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 5;
    head->next = first;

    first->data = 15;
    first->next = second;

    second->data = 25;
    second->next = third;

    third->data = 5;
    third->next = NULL;

    Node n;
    n.traversal(head);

    return 0;
}