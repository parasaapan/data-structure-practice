#include <iostream>
using namespace std;

struct Node {
    int data; 
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

// now we will insert and the end we will insert a 50

void InsertAtEnd(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val); // create a newNOde

    if(tail == nullptr) { // we check if its empty
        head = newNode;
        tail = newNode;
        return; 
    }

    newNode->prev = tail; // we first connect the prevpoint of newNode to the tail,...... so now its look like this 10 20 30 40 <- 50 we connect its first 
    tail->next = newNode; // then connect the tail which is 40 to the 50 or newNode; 40->50
    tail = newNode; // then make the tail Node our newNode 

    // we notice that we dont need to put tail->next = nullptr; 
    // because the constructor handle it

}


void traverseFromHead(Node* head) {
    Node* current = head;

    while(current != nullptr) {
        cout << current->data << "-> ";

        current = current->next;
    }
}


void traverseFromTail(Node* tail) {
    Node* current = tail;

    while(current != nullptr) {
        cout << current->data << "-> ";

        current = current->prev;
    }
}


int main() {

    

    Node* head = new Node(10);
    Node* second = new Node(20);

    Node* third = new Node(30);
    Node* tail = new Node(40);

  
    head->next = second;
    
    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = tail;

    tail->prev = third;

    InsertAtEnd(head,tail, 50);
    traverseFromHead(head);
    cout << endl;

    traverseFromTail(tail);

    return 0;
}