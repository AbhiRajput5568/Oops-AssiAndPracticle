#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout<<"Abhishek Singh (2315272)\n";

    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    // Input coefficients
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive, zero, or negative
    if (discriminant > 0) {
        // Two real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        // Two real and equal roots
        root1 = -b / (2 * a);
        cout << "Roots are real and the same." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    } else {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
