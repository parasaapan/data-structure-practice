#include <iostream>
using namespace std;

class ArrayStack
{
private:
    static const int CAPACITY = 10; // we make this static so everyone can share the same capacity. to save memory

    int stack[CAPACITY];

    int top;

public:
    ArrayStack()
    {
        top = -1;
    }

    void push(int value)
    {
        if (top == CAPACITY - 1)
        {
            cout << "Stack overflow\n";
            return;
        }

        top++;
        stack[top] = value;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "STACK UNDERFLOW\n";
            return;
        }

        cout << "Popped value: " << stack[top] << endl;
        top--;
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Empty stack\n";
            return;
        }

        cout << "RESULT: " << stack[top];
    }

    void displayall()
    {
        if (top == -1)
        {
            cout << "Empty stack\n";
            return;
        }

        cout << "--RESULT--\n";
        
        int temp = top;

        while(temp != -1) {
            cout << stack[temp] << endl;
            temp--;
        }
    }
};

int main()
{

    ArrayStack s1;

    s1.displayall();  // Empty stack
    s1.pop();         // Underflow

    s1.push(10);
    s1.push(20);
    s1.push(30);

    s1.displayall();  // 30 20 10
    s1.peek();        // 30

    s1.pop();         // Removes 30

    s1.displayall();  // 20 10
    s1.peek();        // 20

    return 0;
}