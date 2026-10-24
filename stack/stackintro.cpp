#include <iostream>
using namespace std;

int main() {

    int stack[5]; // stack

    int top = -1; // the index we are accessing it will start at -1 because we top++ first 


    top++;
    stack[top] = 10;

    top++;
    stack[top] = 20;

    top++;
    stack[top] = 30;

    top++;
    stack[top] = 40;

    top++;
    stack[top] = 50;

    // result
    /* 
    10
    20
    30
    40
    50
    */

    // edge case

    /*
    if(top == size of the array in indes/ in this case is 4) {

    cout << "STACK OVERFLOW\n"

    } else {
    top++;
    staock[top] = then add 
    }
    */


    return 0;
}