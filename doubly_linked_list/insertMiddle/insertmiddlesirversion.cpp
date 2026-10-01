#include <iostream>
using namespace std;

struct Node{
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
Node* tail = new Node(50);


void InsertBeginn( int val ) {
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

void InsertAtEnd( int val ) {
    Node* newNode = new Node(val); // we are going to insert a 5

    if(tail == nullptr) { // this will check if the head == nullptr or theres no value there
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->prev = tail;
    tail->next = newNode;
    
    tail = newNode;

}


void insertAtposition(int val, int pos) {
    
    // first is check if the pos ==1 
    if(pos == 1) {
        InsertBeginn(val);
        return;
    }

    // use a traversal pointer variable
    Node* current = head;

    for(int i = 1; i < pos -1 && current != nullptr; i++) {
        current = current->next;
    }

    // if nakarating sa dulo then operate the insera at end
    if(current == nullptr) {
        InsertAtEnd(val);
        return;
    }


    // craewte aa new Node only if all edge cases has been done
    Node* newNode = new Node(val);



    newNode->next = current->next;
    newNode->prev = current;

    // if the next current0>next is not equal to the nullptr it means not tial node
    if(current->next != nullptr) {
        current->next->prev = newNode;
    } else { // buut if its lst then make the newNode as tail node
        tail = newNode;
    }


    // here is when we connect the current at before position to the newNode;
    current->next = newNode;

   
}

void traverse() {
    Node* current = head;


    while(current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }
}

// 10 20 30 40 

int main () {

    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    
    head->next = second;
    second->prev = head;
    second ->next = third;

    third->prev = second;
    third->next = fourth;

    fourth->prev = third;
    fourth->next = tail;

    tail->prev = fourth;

    insertAtposition(1,3);
    traverse();


    return 0;
}