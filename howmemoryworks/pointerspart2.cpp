#include <iostream>
using namespace std;
// pointers plus function

void change(int* num) {
    *num = 90;    
}

void reference(int& x) {
    x = 90;
}

int main() {

    int num = 10;    
    cout << num << endl;

    change(&num);

    cout << "UPDATED NUM "  << num << endl;
 

    cout << "==== reference ==== \n";

    int x = 10;
    cout << "x: " << x << endl;

    reference(x);
    cout << "X: updated; " << x << endl;


    return 0;
}