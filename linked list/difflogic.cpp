#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main() {

    Node* head = new Node;
    Node* second = new Node;
    Node* middle = new Node;
    Node* third = new Node;
    Node* fourth = new Node;

    head->data = 5;
    second->data = 10;
    middle->data = 15;
    third->data = 20;
    fourth->data = 30;

    head->next = second;
    second->next = middle;
    middle->next = third;
    third->next = fourth;
    fourth->next = nullptr;

  second->next = third;
  delete second;

    Node* current = head;

    while(current != nullptr){
        cout << current->data << endl;
        current = current->next;
    }

    current = head;

    while(current != nullptr){
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}