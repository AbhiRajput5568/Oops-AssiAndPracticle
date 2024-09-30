
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Abhishek Singh (2315272)\n";

    float a, b, c, discriminant, root1, root2;

    // Input coefficients
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else {
        cout << "Roots are complex." << endl;
    }

    return 0
}