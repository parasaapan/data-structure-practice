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

void deleteatbegin() {
    if(head == nullptr) {
        cout <<" THERE IS NO TO DELETE";
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
   


    deleteatbegin();

    traverseFromHead(head); // we traverse from head. 



    return 0;
}