#include <iostream>
using namespace std;

class Counter {
private:
    int value;  

public:
   
    Counter(int v = 0) : value(v) {}

    // Overload prefix increment operator (++x)
    Counter& operator++() {
        ++value;  
        return *this;
    }

    // Overload postfix increment operator (x++)
    Counter operator++(int) {
        Counter temp = *this;  
        value++;  // Increment the value
        return temp;  
    }

    
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // cout << "Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";


    Counter c1(5);  
    cout << "Original value: ";
    c1.display();

    // Prefix increment
    ++c1;
    cout << "After prefix increment: ";
    c1.display();

    // Postfix increment
    c1++;
    cout << "After postfix increment: ";
    c1.display();

    return 0;
}
