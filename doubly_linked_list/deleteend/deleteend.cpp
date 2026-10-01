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

   Node* head = new Node(10);
  
     Node* tail = new Node(40);

void deleteatend() {
    if(head == nullptr) {
        return;
    }


    Node* temp  = tail;
    tail = tail->prev;

    if(tail != nullptr) {
        tail->next = nullptr;
    } else {
        head = nullptr;
    }

    delete temp;
}

void traverseFromHead(Node* head) {
    Node* current = head;

    while(current != nullptr) {
        cout << current->data << "-> ";

        current = current->next;
    }
}


int main() {

    

 

    Node* third = new Node(30);
     Node* second = new Node(20);


    head->next = second;
    
    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = tail;

    tail->prev = third;
   


  

    traverseFromHead(head); // we traverse from head. 



    return 0;
}