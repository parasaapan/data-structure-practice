#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node* first = new Node; // this thing is a pointer variialbe this thing store a address
    Node* second = new Node;
    Node* third = new Node;

    first->data = 10; // you are pointing the address to the object and access the data there and change it
    second ->data = 20;
    third->data = 30;

    first->next = second; // since pointer variable is storing a memory address you are now pointing the first node to the second
    second->next = third;
    third->next = nullptr;

   

   
    return 0;
}