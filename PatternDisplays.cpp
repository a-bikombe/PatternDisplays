/*
Student Name: Arianna Bikombe
Date: March 4, 2021
Course: CSCI175N
Lab Assignment: Lab04-02PatternDisplays
Project Name: Pattern Displays
File Name: Lab04-02PatternDisplays.cpp
Description: Displays patterns.
Limitations: Doesn't do very much.
Credits: Not Applicable
 */

#include <iostream>
using namespace std;

int main() {

    // Local variable declarations placed here
    int count;
    int nestcount;

    // Print out your name and course
    cout << "Arianna Bikombe\n";
    cout << "CSCI175N\n";
    cout << "Lab 04_02\n\n";

    // Inform user what program does
    cout << "This program prints a pattern in the console window.\n\n";

    for (count = 1; count <= 10; ++count) {
        for (nestcount = 1; nestcount <= count; ++nestcount) {
            cout << '+';    // output a printable character
        }
        cout << endl; // next line
    }
    
    cout << endl; // next line

    for (count = 10; count >= 1; --count) {
        for (nestcount = 1; nestcount <= count; ++nestcount) {
            cout << '+';    // output a printable character
        }
        cout << endl; // next line
    }
    
    cout << endl; // next line

    // This code pauses the program so instructor can grade
    system("pause");

    return 0;
}

/*

test 1

Arianna Bikombe
CSCI175N
Lab 04_02

This program prints a pattern in the console window.

+
++
+++
++++
+++++
++++++
+++++++
++++++++
+++++++++
++++++++++

++++++++++
+++++++++
++++++++
+++++++
++++++
+++++
++++
+++
++
+

Press any key to continue . . .

*/