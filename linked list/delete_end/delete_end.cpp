#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

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

    Node *current = head; // first we need to traverse


    // meaning of this thing is to traverse until the second to the last we need the second to the last
    while (current->next->next != nullptr)
    {
        current = current->next; // traverse
    }   
    // we know current is holding the second to the last node memoryaddress
    // so if we say current->next it refering to the last node right?

    Node *temp = current->next; // now store that into temporary for safe delete

    // we want the second to the last to be the last node so we will point it as the nullptr
    current->next = nullptr;

    delete temp; // no we now successfully delete temp.






    current = head;

    while (current != nullptr)
    {
        cout << current->data << endl;
        current = current->next;
    }

    return 0;
}