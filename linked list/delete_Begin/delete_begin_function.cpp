#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void delete_begin(Node*& head) {

    if(head == nullptr) {
        return;
    }

     Node* temp = head;

     head = head->next;

     delete temp;
}

 
int main() {
   
    Node *head = new Node;
    Node *second = new Node;  
    Node *third = new Node;
    Node *fourth = new Node;

    head->data = 10; // we are going to delete 10
    second->data = 20;  
    third->data = 30;
    fourth->data = 40;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

   
    delete_begin(head); // this will ldelete the beginning.

    

    return 0;
}