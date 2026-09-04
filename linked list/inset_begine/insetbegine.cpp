#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{

    Node *head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = nullptr;


    // first create a new Node
    Node* newNode = new Node;
    newNode->data = 5; // set value

    newNode->next = head; // connect it first int the head;
    // in this part the newNode is connecting to the head so now its like 5 10 20 30 
    // but we want make the head as the head or starting

    head = newNode; // so now we will make the head is equal to the newNode 
    // the head now is the 5 and pointing to the 10 earlier because newNode connecting to the 10
    

    Node* current = head; 

    while(current != nullptr) {
        cout << current->data << endl;
        
        current = current->next;
    }

    
    


    return 0;
}