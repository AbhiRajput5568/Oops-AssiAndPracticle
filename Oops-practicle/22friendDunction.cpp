#include <iostream>
using namespace std;

class Number;  // Forward declaration

class Calculator {
public:
    // Friend function declaration
    friend int add(Number a, Number b);
};

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {} 

    
    friend int add(Number a, Number b);
};

// Friend function definition
int add(Number a, Number b) {
    return a.value + b.value; 
}

int main() {
    cout<<"Abhishek Singh (2315272)\n";


    Number num1(10);
    Number num2(20);

    // Call the friend function 
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;

    return 0;
}
