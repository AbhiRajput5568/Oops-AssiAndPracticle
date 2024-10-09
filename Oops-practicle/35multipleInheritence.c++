#include <iostream>
using namespace std;

// Base class 1: Student details
class Student
{
private:
    int rollNumber;

public:
    void getRollNumber()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
    }

    void displayRollNumber()
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Base class 2: Marks in two subjects
class Test
{
public:
    float subject1Marks, subject2Marks;

    void getMarks(float marks1, float marks2)
    {
        subject1Marks = marks1;
        subject2Marks = marks2;
    }

    void displayMarks()
    {
        cout << "Marks in Subject 1: " << subject1Marks << endl;
        cout << "Marks in Subject 2: " << subject2Marks << endl;
    }
};

// Derived class: Total marks calculation (inheriting from both Student and Test)
class Result : public Student, public Test
{
private:
    float totalMarks;

public:
    void calculateTotal()
    {
        totalMarks = subject1Marks + subject2Marks;
    }

    void displayResult()
    {
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main()
{
    cout << "Abhishek Singh (2315272)" << endl;

    // Create an object of Result (derived class)
    Result student1;

    // Get student's roll number and marks

    student1.getRollNumber();
    cout << "Enter marks in Subject 1 and Subject 2: ";
    cin >> student1.subject1Marks >> student1.subject2Marks;
    // Calculate total marks and display the result
    student1.calculateTotal();
    student1.displayResult();

    return 0;
}
