// Program to interchange the values of two variables
#include <iostream>
using namespace std;
int a = 10, b = 20, c;
int main()
{
    // cout << "Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";


    cout << "Before Swaping No:";
    cout << endl
         << a << b;
    cout << "\nAfter Swaping No: \n";
    c = a;
    a = b;
    b = c;
    cout << a << b;
}