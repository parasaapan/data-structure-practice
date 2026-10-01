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


void InsertBeginn(Node*& head, Node*& tail, int val ) {
    Node* newNode = new Node(val); // we are going to insert a 5

    if(head == nullptr) { // this will check if the head == nullptr or theres no value there
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head; // point the newNode too the head becuae its in the beginning soo now 5 -> 10
    
    head->prev = newNode; // we connect the head or 10 to the prev which is newNOde.
    head = newNode; // we set our head as the newNode;
}

void traverseFromHead(Node* head) {
    Node* current = head;

    while(current != nullptr) {
        cout << current->data << "-> ";

        current = current->next;
    }
}


int main() {

    

    Node* head = new Node(10);
    Node* second = new Node(20);

    Node* third = new Node(30);
    Node* tail = new Node(40);

    // i dont assign the head prev to the nullptr because eit already assigned okay? (LLook at the constructor boi)
    head->next = second;
    
    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = tail;

    tail->prev = third;
    // i dont put tail->next because its already pointer to the nullptr (in ouur Constructor)


    InsertBeginn(head,tail,5); // we call the function

    traverseFromHead(head); // we traverse from head. 


    // i put traverse from head. because u can also traverse from the tail.. 


    return 0;
}