#include <iostream>
using namespace std;

int main() {

    int x = 5;
    int* p = &x; // this variable (pointer) is store the memory address of x using reference(&).

    cout << p << endl; // print the memory adress of x.

    // & operator reference
    int y = 5 ;

    cout << y << endl; // this print the value of y.
    cout << &y << endl; // this print the memoryadress of y.

        cout << &p << endl; // pointer variable has a own memory address. 

    // Dereferencing meaning go the address of that and get the value there.

    int q = *p; // here the variable will go to the pointer variable and get the value which is 5.

    cout << q << endl; // this print 5 becausue of dereferencing.

    // HOW THIS IS USEFULL EXAMPLE:
    
    *p = 50; // this will change the value of x into 50.
    q = *p;
    cout << q;

   


    return 0;
}