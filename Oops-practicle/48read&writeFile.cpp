/*q48:-Program to perform read and write operations on file*/
#include <iostream>
#include <fstream> // For file operations
using namespace std;

int main()
{
 
    cout << "Abhishek Singh (2315272)\n";
    // cout << "Aayush Thakur (2315271)\n";

    // Writing to a file
    ofstream outFile("example.txt"); // Create and open a file for writing
    if (outFile.is_open())
    {
        outFile << "Hello, this is a file write operation.\n";
        outFile << "C++ file handling is simple!" << endl;
        outFile.close(); // Close the file after writing
        cout << "Data written to file successfully." << endl;
    }
    else
    {
        cout << "Unable to open file for writing." << endl;
    }

    // Reading from the file
    ifstream inFile("example.txt"); // Open the file for reading
    if (inFile.is_open())
    {
        string line;
        cout << "\nReading from file:" << endl;
        while (getline(inFile, line))
        { // Read file line by line
            cout << line << endl;
        }
        inFile.close(); // Close the file after reading
    }
    else
    {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}
