#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;


    // lets now create a newNode

    Node* newNode = new Node;

    newNode->data = 10;
    

    // since its the first node in the linked list
    // we want to point it nullptr both
    newNode->prev = nullptr;
    newNode->next = nullptr;

    head = newNode; // head becomes the newNode;
    tail = newNode; // tail becomes the newNode also.

    // they own the same node because there is only one node

    /*
    head
    ↓
  [10]
    ↑ 
  tail
    */

    return 0;
}