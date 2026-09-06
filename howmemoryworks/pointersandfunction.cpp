#include <iostream> 
using namespace std;

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;

    
}

void ref(int &a) {
    int a = 50;
}

int main( ) {
// pointers
  int x = 20;
  int y = 10;
  swap(&x,&y);
  cout << x << endl;
  cout << y << endl;


// reference directly accessing the variable because they share the same memory address
    int a = 10;
    ref(a);
    cout << a;
    return 0;
}