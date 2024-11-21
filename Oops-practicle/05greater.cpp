#include <iostream>
using namespace std;

// Function to find the greater of two numbers
void large(int a, int b) {
    if (a > b) {
        cout << "Number 1st is greater: " << a;
    }
    else {
        cout << "Number 2nd is greater: " << b;
    }
}

int main() {
    // cout << "Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";


    large(10, 5);
    return 0;
}
