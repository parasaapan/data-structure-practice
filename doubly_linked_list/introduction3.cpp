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

    // connect them all 
    // make sure each node had next and prev

    head->prev = nullptr; // as we see in previous lesson. the head prev should always be point to nullptr
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = fourt;

    fourt->prev = third;
    fourt->next = tail;

    tail->prev = fourt;
    tail->next = nullptr; // to null ptr because its the last node




    return 0;
}