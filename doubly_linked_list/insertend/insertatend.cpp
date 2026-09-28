#include <iostream>
using namespace std;

struct Node {
    int data;

    Node* next;
    Node* prev;
};

int main() {

    Node* head = new Node; // the head
    Node* second = new Node;
    Node* third = new Node;
    Node* fourt = new Node;
    Node* tail = new Node; // the tail node

    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourt->data = 40;
    tail->data = 50;



    head->prev = nullptr; 
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = fourt;

    fourt->prev = third;
    fourt->next = tail;

    tail->prev = fourt;
    tail->next = nullptr; 


    // you dont need to traverse. because u have a taill node eh diba kumbagaa yun na yon eh

    Node* newNode = new Node;

    newNode->data  = 60;

    newNode->next = nullptr; // since were inserting at end we need to next it to the nulllptr
    newNode->prev = tail; // we connect it to tail.

    tail->next = newNode; // now we connect the tail to the newNode;

    // we want the tail node to be a tail node, because thats the rule

    tail = newNode;


    // we traverse and check
    cout << "--- traverse forward----\n";
    Node* current = head; 

    while(current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }

    cout << "\n--------- traverse backward----------\n";

    current = tail; 


    while(current != nullptr) { 
    cout << current->data << endl;

    current = current->prev;
   
    }

    return 0;
}