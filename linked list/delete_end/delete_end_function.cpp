#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};


void Delete_end(Node*& head) {
    // check if therese no node
    if(head == nullptr) {
        return;
    }
    
    // check if the is the only node then we will make the head = nullptr
    if(head->next == nullptr) {
        delete head; // delete first
        head = nullptr; // now set the head to nullptr // the head still there because you cant delete the memory address itself
        // the only thing you can remove is the object
        return;
    }

    Node* current = head;

    while(current->next->next != nullptr) {
        current = current->next;
    }

    Node* temp = current->next;
    current->next = nullptr;

    delete temp;

}

int main()
{

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



    Delete_end(head);



    Node* current = head;

    while (current != nullptr)
    {
        cout << current->data << endl;
        current = current->next;
    }

    return 0;
}