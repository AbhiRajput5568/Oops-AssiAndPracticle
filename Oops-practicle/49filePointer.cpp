/*q49:-Program to illustrate the concept of file pointers*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";

    // Open a file in write mode and write some data
    ofstream outFile("example.txt");
    outFile << "Hello, world!";
    outFile.close();

    // Open the file in read-write mode
    fstream file("example.txt", ios::in | ios::out);

    if (file.is_open())
    {
        // Display the initial position of the get (read) pointer
        cout << "Initial get pointer position: " << file.tellg() << endl;

        // Move the get pointer to the 7th byte
        file.seekg(6, ios::beg);
        cout << "Get pointer position after seekg: " << file.tellg() << endl;

        // Read a single character at the 7th byte
        char ch;
        file.get(ch);
        cout << "Character at 7th position: " << ch << endl;

        // Display the initial position of the put (write) pointer
        cout << "Initial put pointer position: " << file.tellp() << endl;

        // Move the put pointer to the end of the file
        file.seekp(0, ios::end);
        cout << "Put pointer position after seekp: " << file.tellp() << endl;

        // Append some text at the end of the file
        file << " Welcome to file pointers!";
        cout << "Data written at the end." << endl;

        // Close the file
        file.close();
    }
    else
    {
        cout << "Error opening the file." << endl;
    }

    return 0;
}
