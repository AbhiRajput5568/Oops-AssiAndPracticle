/*1...b)Given a pointer to a variable ‘a’, the task is to complete the function ‘updateVar()’ which will increment the value of the variable by ‘10’. The function does not return anything.*/

#include <iostream>
using namespace std;

void updateVar(int *a)
{
    *a += 10;
}

int main()
{
    cout << "Abhishek Singh (2315272)" << endl;
    int value = 5;
    cout << "Before update: " << value << endl;

    updateVar(&value); // Pass the address of 'value' to updateVar

    cout << "After update: " << value << endl;
    return 0;
}
