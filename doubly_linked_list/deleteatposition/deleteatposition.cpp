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
    if(tail == nullptr) {
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

void deletebegine() {
    if(head == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->next;

    if(head != nullptr) {
        head->prev = nullptr;
    } else {
        tail = nullptr;
    }

    delete temp;
}

void deleteatposition(int pos) {
    if(head == nullptr) {
        return;
    }

    if(pos < 1) {
        return;
    }



    Node* current = head;

    for(int i = 1; i < pos && current != nullptr; i++) {
        current = current->next;
    }

    if(current == nullptr) {
        cout << "NO POSSIBLe";
        return;
    }   

    if(current->prev) {
        current->prev->next = current->next;
    } else {
        head = head->next;
    }

    if(current->next) {
        current->next->prev = current->prev;
    } else {
        tail = tail->prev;
    }




    delete current;

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
   


    deleteatposition(10);

    traverseFromHead(head); // we traverse from head. 



    return 0;
}