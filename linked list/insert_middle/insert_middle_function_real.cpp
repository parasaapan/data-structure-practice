#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void Insert_Middle(Node* current, int value) {



    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = current->next;
    current->next = newNode;
}

int main() {
    int value = 25; // this is the value we are going to use
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

    Node* current = second; // we will insert between 20 and 30.
    Insert_Middle(current,value);

    current = head;

    while(current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }



  


    return 0;
}