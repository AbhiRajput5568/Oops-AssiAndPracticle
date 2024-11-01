/*b)Implement the following steps for two files-file1.txt and file2.txt in C++:
i)  Open file1.txt and file2.txt in read mode.
ii) Open file3.txt in write mode.
iii) Run a loop, to one-by-one copy characters of file1.txt to file3.txt.
iv) Run a loop, to one-by-one copy characters of file2.txt to file3.txt.
v) Close all files.*/
#include <iostream>
#include <fstream> // For file operations

using namespace std;

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    // Step i: Open file1.txt and file2.txt in read mode
    ifstream file1("../file1.txt");
    ifstream file2("../file2.txt");

    // Step ii: Open file3.txt in write mode
    ofstream file3("../file3.txt");

    // Check if files opened successfully
    if (!file1.is_open() || !file2.is_open() || !file3.is_open())
    {
        cerr << "Error opening one or more files!" << endl;
        return 1; // Exit with an error code
    }

    // Step iii: Copy characters from file1.txt to file3.txt
    char ch;
    while (file1.get(ch))
    {
        file3.put(ch);
    }

    // Step iv: Copy characters from file2.txt to file3.txt
    while (file2.get(ch))
    {
        file3.put(ch);
    }

    // Step v: Close all files
    file1.close();
    file2.close();
    file3.close();

    cout << "Files copied successfully!" << endl;

    return 0;
}
