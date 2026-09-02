#include <iostream>
using namespace std;

int main() { 

    int *p = new int;

    *p = 50;


    delete p;
    p = nullptr; 

    return 0;
}