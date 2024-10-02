#include <iostream>
using namespace std;
#include <string>

int main()
{
    cout << "Abhishek Singh (2315272)\n";
    // Creating strings
    string str1 = "Hello, ";
    string str2 = "World!";

    // Concatenation
    string str3 = str1 + str2;
    cout << "Concatenated String: " << str3 << endl;

    // Length
    cout << "Length of str3: " << str3.length() << endl;

    // Accessing characters
    cout << "First character of str3: " << str3[0] << endl;

    // Substring
    string subStr = str3.substr(7, 5); // Start at index 7, length 5
    cout << "Substring: " << subStr << endl;

    // Find
    size_t pos = str3.find("World");
    if (pos != string::npos)
    {
        cout << "'World' found at position: " << pos << endl;
    }
    else
    {
        cout << "'World' not found" << endl;
    }

    // Replace
    str3.replace(7, 5, "C++");
    cout << "After replacement: " << str3 << endl;

    // Convert to uppercase
    for (char &c : str3)
    {
        c = toupper(c);
    }
    cout << "Uppercase String: " << str3 << endl;

    return 0;
}
