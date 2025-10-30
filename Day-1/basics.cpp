// Basic structure of a C++ program

#include <iostream> // For input/output operations
using namespace std; // Use standard namespace

// Function to add two numbers and print the sum (void return type)
void add(int a, int b) {
    cout << a + b << endl;
}

// Function to multiply two numbers and return the product (int return type)
int multiply(int a, int b) {
    return a * b;
}

// Function demonstrating "pass by value"
// A copy of 'a' is passed; original 'a' in main() is unaffected.
void passbyValue(int a) {
    a = a + 10;
    cout << "Value in passbyValue: " << a << endl;
}

// Function demonstrating "pass by reference"
// A reference to 'a' is passed; original 'a' in main() is modified.
void passbyReference(int& a) {
    a = a + 10;
    cout << "Value in passbyReference: " << a << endl;
}

// Main function - program execution starts here
int main() {
    add(10, 20); // Call add function

    int product = multiply(10, 20); // Call multiply and store result
    cout << product << endl;

    int num = 10; // Declare a variable for pass-by-value/reference examples

    // Pass by value example
    passbyValue(num);
    cout << "Original num after passbyValue: " << num << endl; // num is still 10

    // Pass by reference example
    passbyReference(num);
    cout << "Original num after passbyReference: " << num << endl; // num is now 20

    cout << "Hello world" << endl; // Basic output
    return 0; // Indicate successful execution
}