#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    
    Node *head = new Node;
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;

    head->data = 5;
    first->data = 10;
    second->data = 15;
    third->data = 20;

    head->next = head;
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = nullptr;

    Node*temp = new Node;
temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;

    }
    
    








    
    return 0;
}