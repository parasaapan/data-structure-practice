#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// in this part we only need the head so we can traverse
// as usual use & reference to directly edit the memory address
void insert_end(Node *&head, int value)
{

    Node *newNode = new Node;

    newNode->data = value;
    newNode->next = nullptr;

    // this statement saying if the head is equal to the nullptr then make this newNode as the head then return
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    // traversal pointer 
    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    current->next = newNode;
}


// in making a function of print all the linked lislt you dont need to use reference because therese nothing to edit
void printall(Node* head) {
    Node* current = head;

    while(current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }
}

int main()
{

    Node* head = nullptr;


    // this is just loop to test the algorithm
    int value;
    for (int i = 0; i < 3; i++)
    {

        cout << "ENTER A VALUE: ";
        cin >> value;
        insert_end(head,value);
    }

    printall(head);

    return 0;
}