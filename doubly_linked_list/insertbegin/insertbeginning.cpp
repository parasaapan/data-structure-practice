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



    Node* newNode = new Node;
    newNode->data = 5;


    newNode->prev = nullptr; // we set the newNode prev into the nullptr because it insert in the beginning 
    newNode->next = head; // we point it to the head.
    // the problem is head->prev should be point to the newNode. because right now its pointing to the nullptr
    head->prev = newNode;  // so now the prev we are now going to point it into the newNode
    head = newNode; // and we make the head the newNode






    // then traverse beck and forward



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