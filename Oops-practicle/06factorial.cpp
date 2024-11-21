#include <iostream>
using namespace std;
int main()
{
    // cout<<"Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";


    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is: " << fact;
    return 0;
}