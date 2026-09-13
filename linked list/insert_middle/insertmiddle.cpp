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
     Node *current = head;


    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;


    // FIRST IS TO CREATE 
    Node *newNode = new Node;
    newNode->data = 25; // SET DATA ON IT

    // WE WANT A SPECIFIC POSITION WHERE WE ARE GOING TO INSERT IT 
    // after the position thats we are going to insert it..
    current = second;
    

    
    newNode->next = current->next; // we connect first the newNOde to the third node or the next node after that specific position

    current->next = newNode; // then connect the specific position to the newNode; 
   
    // badibing badaboom they are connected 

    


    current = head;

    while (current != nullptr)
    {
        cout << current->data << endl;

        current = current->next;
    }

    return 0;
}