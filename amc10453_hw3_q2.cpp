// amc10453_hw3_q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Get user name input
//Get graduation year
//get current year
// //get status
// print name, you are status
//we need a program that takes the grad year and the current year and determines what grade they are in


#include <iostream>
using namespace std;

int main()
{
    string studentName;
    int graduationYear, currentYear;
  

    cout << "Please enter your name: ";  cin >> studentName;
    cout << "Please enter your graduation year: ";  cin >> graduationYear;
    cout << "Please enter current year: ";  cin >> currentYear;
    
    
    int classStatus = graduationYear - currentYear;

    if (classStatus == 4)
    {
        cout << studentName << ", you are a Freshman." << endl;
    }
    else if (classStatus == 3)
    {
        cout << studentName << ", you are a Sophomore." << endl;
    }
    else if (classStatus == 2)
    {
        cout << studentName << ", you are a Junior." << endl;
    }
    else if (classStatus == 1)
    {
        cout << studentName << ", you are a Senior." << endl;
    }
    else if (classStatus == 0)
    {
        cout << studentName << ", you have Graduated." << endl;
    }
    else if (classStatus > 4)
    {
        cout << studentName << ", you are not in college yet." << endl;
    }
    else
    {
        cout << studentName << ", you have already Graduated." << endl;
    }

    return 0;
}


