#include <iostream>
using namespace std;


int main()
{
    // cout<<"Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";


    int num, reversedNum = 0;

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0)
    {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    cout << "Reversed Number: " << reversedNum << endl;

    return 0;
}
