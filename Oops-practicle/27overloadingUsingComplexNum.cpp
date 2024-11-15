#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overload the binary addition operator (+)
    Complex operator+(const Complex &c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    cout << "Abhishek Singh (2315272)\n";

    Complex c1(3, 2); 
    Complex c2(1, 7);  

    // Add two complex numbers using overloaded + operator
    Complex c3 = c1 + c2;

    // Display the results
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    cout << "Sum of two complex numbers: ";
    c3.display();

    return 0;
}
