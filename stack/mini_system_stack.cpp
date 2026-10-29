#include <iostream>
using namespace std;

void menu(int &choice)
{
    cout << "\n--- STACK MENU ---\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Peek\n";
    cout << "4. Display\n";
    cout << "5. Exit\n";
    cout << "ENTER CHOICE: ";
    cin >> choice;
}

void askValue(int& value) {
    cout << "ENTER VALUE: ";
    cin >> value;
}


void push(int stack[], int& top, int value, int capacity ) {
    if(top == capacity - 1) {
        cout << "STACK OVERFLOW\n";
        return;
    }

    // add a value in top
    top++;
    stack[top] = value;
    
}


void pop(int stack[], int& top) {
    if(top == -1) {
        cout << "STACK UNDERFLOW\n";
        return;
    }

    cout << "POPPED VALUE: " << stack[top] << endl;
    top--; 

}

void peek(int stack[], int top) {
    if(top == -1) {
        cout << "EMPTY STACK\n";
        return;
    }

    cout << "VALUE: " << stack[top];
}


void displayAll(int stack[], int top) {

    if(top == -1) {
        cout << "EMPTY STACK\n";
        return;
    }


    // experiemnt hahha
    int temp = top;

    while(temp != -1) {
        cout << stack[temp] << endl;
        temp--;
    }

}

int main()
{
    const int CAPACITY = 10;

    int stack[CAPACITY];
    int top = -1;

    int value = 0;

    int choice = 0;

    do
    {
        menu(choice);

        switch (choice)
        {
        case 1: 
            askValue(value);
            push(stack,top,value,CAPACITY);
            break;
        case 2:
            pop(stack,top);
            break;

        case 3:
            peek(stack,top);
            break;
        
        case 4:
            displayAll(stack,top);
            break;

        case 5: 
            cout << "EXTIT\n";
            break;
        default:    
            cout << "Invalid Input\n";
            break;
        }
    } while(choice != 5);

    return 0;
}