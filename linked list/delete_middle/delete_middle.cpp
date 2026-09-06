#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main() {

    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;


    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;


    Node* current = second; // THIS WILL HOLD THE SPECIFIC POSITION

    Node* temp = current->next; // THE TEMP WILL HOLD THE NODE YOU WANT TO DELTE

    // current is hold the 20
    // temp is hold the 40
    current->next = temp->next; // now we connect them
    // then delete

    delete temp;
    
    
    return 0;
}