/*Q:50:-Write a program to find the sum of elements of one dimensional Array.*/
#include <iostream>
using namespace std;

int main() {
    cout<<"Abhishek Singh (2315272)"<<endl;
    int n, sum = 0;

    // Ask the user for the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare an array of size n
    int arr[n];

    // Input elements in the array
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the elements
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the sum
    cout << "The sum of the elements is: " << sum << endl;

    return 0;
}
