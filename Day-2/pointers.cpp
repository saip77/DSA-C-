// Understanding Pointers

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    cout << ptr << endl; // Prints the address of a
    cout << *ptr << endl; // Prints the value of a
    *ptr = 20;
    cout << a << endl; // Prints the new value of a
}