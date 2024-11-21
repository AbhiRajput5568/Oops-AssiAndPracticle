/*Q:52:-Write a program to swap two numbers using call by value and call by reference. */
#include <iostream>
using namespace std;

// Function to swap using Call by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swap (Call by Value): a = " << a << ", b = " << b << endl;
}

// Function to swap using Call by Reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "After swap (Call by Reference): a = " << a << ", b = " << b << endl;
}

int main() {
    cout<<"Abhishek Singh (2315272)"<<endl;
    int x, y;

    // Input values for x and y
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // Swap using Call by Value
    cout << "Before swap (Call by Value): x = " << x << ", y = " << y << endl;
    swapByValue(x, y);  // After this call, x and y in main will not be changed

    // Swap using Call by Reference
    cout << "Before swap (Call by Reference): x = " << x << ", y = " << y << endl;
    swapByReference(x, y);  // After this call, x and y in main will be changed

    // Final output after both swaps
    cout << "After swap (Call by Reference), Final values in main: x = " << x << ", y = " << y << endl;

    return 0;
}


