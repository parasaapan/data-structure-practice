#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = new Node; // making a head in linked list keeps track of the first node in linked list...
    // starting point
    Node *second = new Node;

    head->data = 10;
    second->data = 20;

    head->next = second;
    second->next = nullptr;

    // now we are going to use traversal to print all of this

    // you need a temporary Node to store the head
    // because when you use the head then head = head->next you will now lose the head
    // rule here never lose the head or else everything now wiill be lose.

    Node *current = head; // this will store the memory address of head

    while (current != second)
    {
        cout << current->data << endl;

        current = current->next;
    }

    delete head;
    delete second;

    return 0;
}