#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};


 
int main() {
   
    Node *head = new Node;
    Node *second = new Node;  
    Node *third = new Node;
    Node *fourth = new Node;

    head->data = 10;
    second->data = 20;  
    third->data = 30;
    fourth->data = 40;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

   
    // create a temporary pointer variable for safe delete 
    Node* temp = head; // this temp will hold the memory address the head
    // now we move the head to the second so the second becomes the head
    head = head->next;

    delete temp; // we delete temp since temp is hold the memorry address of head.

    Node* current = head;

    while(current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }
    // NOTE: if you use delete the thing is actually deleting is the object where that memory address is pointing to 
    // not the memory address it self
    // you cant remove memory address itself


    return 0;
}