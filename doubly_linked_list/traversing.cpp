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


    // there are two ways of traversing in doubly linked list.
    cout << "--- traverse forward----";
    Node* current = head; // first way !!! our bestfriend the og

    while(current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }

    cout << "\n--------- traverse backward----------\n";
    // the 2nd way now is we can traverse backward
    // but to do that we are going to start at tail node. 

    current = tail; 
    // set the temp variable into the tail 

    // now chigga watch this. we are goint to traverse using that current = tail.

    while(current != nullptr) { 
    cout << current->data << endl;

    current = current->prev;
    // this is the most important thing here. 
    //  since the use of prev is to point into the previous node.
    // we can now move backward
    }

    // question?? "Why the condition in the loop still says current != nullptr"
    // thats because the head->prev is = to the nullptr



    return 0;
}