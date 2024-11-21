/*Q47:-Program to show pointer arithmetic operations*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";

    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer pointing to the first element of the array

    cout << "Initial pointer value: " << *ptr << endl;

    // Increment pointer
    ptr++;
    cout << "After incrementing, pointer value: " << *ptr << endl;

    // Decrement pointer
    ptr--;
    cout << "After decrementing, pointer value: " << *ptr << endl;

    // Move pointer by 2 positions forward
    ptr += 2;
    cout << "After moving forward by 2, pointer value: " << *ptr << endl;

    // Calculate difference between pointers
    int *startPtr = arr;
    int difference = ptr - startPtr;
    cout << "Difference between pointers: " << difference << endl;

    return 0;
}
