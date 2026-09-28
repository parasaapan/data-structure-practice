#include <iostream>
using namespace std;
// syntax of the doubly linked list
struct Node
{
    int data;
    Node *next;
    Node *prev; // new thing here
    // the prev will store the memory address of previous Node. 
};

int main()
{
    // we create two node because we want to know where our code will start and end
    Node* head = nullptr;
    Node* tail = nullptr;
    
    // in doubly linked list u want to protect the head node and the tail node 
    // When modifying a doubly linked list, always think about: HEAD, TAIL, NEXT, and PREV
    
    // if u have a connection of doubly linked list like this
     /*
     
     nullptr ← [10] ⇄ [20] ⇄ [30] → nullptr
           ↑                    ↑
          HEAD                 TAIL
     

    THE RULE IS: 
    1.  head->prev = nullptr --------------- this shit head->prev should be always = nullptr
    2.  tail->next = nullptr ---------------- this nga tail should always next to nullptr

    -------------EXPLANATION OF THE RULE NUMBER 1 ---------
    since the doubly linked list is moving back and forward. The head should also have a prev right?
    To justify this larper skibidy head, his prev should be "nullptr"

    ------------EXPLANATION OF THE RULE NUMBER 2-----------
    commonsense nig..😒 its the tail node right????????? so obviously the next should be nullptr just like in the linked list
     */

    return 0;
}