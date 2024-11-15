#include <iostream>
using namespace std;

class MyClass {
    int *ptr;  

public:
    
    MyClass(int value) {
        ptr = new int(value);  // 
        cout << "Constructor called! Value assigned: " << *ptr << endl;
    }

    // Destructor
    ~MyClass() {
        delete ptr;  
        cout << "Destructor called! Memory freed." << endl;
    }

    void display() {
        cout << "Value = " << *ptr << endl;
    }
};

int main() {
    cout<<"Abhishek Singh (2315272)\n";

    MyClass obj(10);  
    obj.display();   

    return 0; 
}
