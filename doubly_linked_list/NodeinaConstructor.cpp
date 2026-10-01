#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int val) { // this is a constructor. Meaning: Whenever i create a node automatically prepare its initial value for me.
        data = val; // this is the initial vallue of our data so when we pass a value then boomka boom
        next = nullptr; // why do we need to initialize this twoo pointer?
        prev = nullptr; // when we creating node and not assigning yet we can simpli y says that this are points to nothing yet.
    }
};

int main () {



    return 0;
}