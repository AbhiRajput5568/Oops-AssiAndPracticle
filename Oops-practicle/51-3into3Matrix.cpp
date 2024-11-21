/*Q:51:- Write a program to find the determinant of a 3 x 3 matrix*/
#include <iostream>
using namespace std;

// Function to calculate the determinant of a 3x3 matrix
int determinant(int matrix[3][3]) {
    // Extract elements from the matrix
    int a = matrix[0][0], b = matrix[0][1], c = matrix[0][2];
    int d = matrix[1][0], e = matrix[1][1], f = matrix[1][2];
    int g = matrix[2][0], h = matrix[2][1], i = matrix[2][2];

    // Using the formula for the determinant of a 3x3 matrix
    int det = a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
    
    return det;
}

int main() {
    int matrix[3][3];
    
    // Input elements for the 3x3 matrix
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Element [" << i+1 << "][" << j+1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Calculate the determinant
    int det = determinant(matrix);

    // Output the determinant
    cout << "The determinant of the matrix is: " << det << endl;

    return 0;
}
