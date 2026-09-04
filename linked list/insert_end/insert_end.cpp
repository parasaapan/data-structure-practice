#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main() {

    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;


    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = nullptr;

    Node* newNode = new Node;
    // create a newNode
    newNode->data = 40;
    newNode->next = nullptr; // assign it as a last. Since its the end of the node
    
    Node* current = head; // use a temporary pointer variable or (traversal pointer)

    while(current->next != head) { // we use curernt->next != head so it can stop before the last node
        current = current->next; // we traverse
    }

    current->next = newNode; // then assign that last node to point into the newNode

    // SPecial note reaalization: Even you create a temporary pointer once a two pointervariable share a memoryaddress
    // they will go to the same house or where are they poiinting to.

    return 0;
}