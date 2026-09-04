#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void insert_end( Node* position, int x)
{
    Node* newNode = new Node;
    newNode->data = x;
    position->next = newNode;

    newNode->next = position->next;
    position->next = newNode;
}

void search(Node *head, Node *current, Node *&position, int& x)
{   
    int value; 
    cout << "ENTER WHERE YOU WANT TO INSERT IT(I WILL INSERT AFTER THAT): ";
    cin >> value;
    cout << "ENTER A VALUE TO INSERT: ";
    cin >> x;

    current = head;
    while (current != nullptr)
    {
        if (value == current->data)
        {
            position = current;
            return;
        }
        current = current->next;
    }

    
}

void print(Node *head, Node *current)
{
    current = head;

    while (current != nullptr)
    {
        cout << current->data << endl;
        current = current->next;
    }
}

int main()
{
    int x;

    // this is for the specific position target
    Node *position = nullptr;

    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;

    // this is a traversal pointer
    Node* current = head;

    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    print(head, current);
    search(head, current, position,x);
    insert_end(position,x);

    print(head, current);

    return 0;
}