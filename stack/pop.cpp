#include <iostream>
using namespace std;

int main() {

    // we are going to applly the concept of last in first out
    int stack[5]; 

    int top = -1; 


    top++;
    stack[top] = 10;

    top++;
    stack[top] = 20;

    top++;
    stack[top] = 30;

    top++;
    stack[top] = 40;

    top++;
    stack[top] = 50; // we will remove this because this is the last value we push


    // by this we can now reduce the active stack. 
    // top--
    

    // edge cases/ Dont run this code

    if(top == -1) {
        cout << "STACK UNDERFLOW";
    } else {
        cout << "Popped value: " << stack[top];
        top--; // the we poppe
    }

    return 0;
}