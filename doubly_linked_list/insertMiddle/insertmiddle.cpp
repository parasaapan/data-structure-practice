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


// 10-20-30-40
// lets first insert 20 


// this insertion is searching and not by given position okay?
void insertAtgivenPosition(Node*& head, Node*& tail, int val) {

   Node* current = head;

   while(current != nullptr && current->data != 20) {
    current = current->next;
   }

   if(current == nullptr) {
    cout << "POSITION DID NOT FOUND";
    return;
   }

   Node* newNode = new Node(val);

   newNode->next = current->next; // first connect out newNode into the basta

   newNode->prev = current; // connect the newNode->prev into the current

   if(current->next != nullptr) { // lets check if the position we want to the prev is in the nullptr if yes then we dont doo this step
    current->next->prev = newNode;
   }

   current->next = newNode; // then we connect the current->next into the newNode; 
   

   // ka boom kapaw 

   // ikaw ng bahalllang umindijacob minadali ko nallng wala na kong maisip na explantion

}


void traverseFromHead(Node* head) {
    Node* current = head;

    while(current != nullptr) {
        cout << current->data << "-> ";

        current = current->next;
    }
}

int main () {


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

    // now lets insert at give position 
    insertAtgivenPosition(head,tail,25);
    traverseFromHead(head);
    return 0;
}