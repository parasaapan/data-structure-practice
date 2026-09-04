#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
// using & reference, we can use to the computer that edit the memory address of the head directly
// Node* head hold the address 
// & directly accessing the address to change inside the function
void insert_beginning(Node*& head, int value) {

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;

    head = newNode;
 
}

int main()
{
     Node* head = nullptr;
     // this Node* head hold a memory address of head
    int value;

    int i = 0;

   
    cout << "ENTER A NUMBER TO INSERT: ";
    cin >> value;



    insert_beginning(head,value);



    
    return 0;
}