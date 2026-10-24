#include <iostream>
using namespace std;

void push(int stack[], int& top, int capacity, int value) {
    // meaning of capacity -1 the size of an array is 5. So means capacity now is equal to 4 
    // when its 
    if(top == capacity - 1) {
        cout << "STACK OVERFLOW\n";

        return;
    }

    top++;
    stack[top] = value;
}


void pop(int stack[], int& top) {
    if(top == -1) {
        cout << "STACK UNDERFLOW";
        return;
    }

    cout << "Popped value: " << stack[top] << endl;
    top--;
}

void peek(int stack[], int top) {
    if(top == -1) {
        cout << "STACK IS EMPTY\n";
        return;
    }

    cout << stack[top] << endl;
}

int main() {

    const int CAPACITY = 5; // this is the size of the stack its const 

    int stack[CAPACITY];
    int top = -1;


    push(stack,top,CAPACITY,10);
    push(stack,top,CAPACITY,20);
    push(stack,top,CAPACITY,30);

    peek(stack,top);

    pop(stack,top);

    peek(stack,top);

    return 0;
}