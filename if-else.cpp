// Basic if-else Example
/*
This program checks if a number is positive or negative.
*/
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is negative." << endl;
    }

    return 0;
}
// ✅ 2. if-else if-else Example
// 🎯 Program: Grade Evaluation
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0 - 100): ";
    cin >> marks;
 // Check score range for grading
    if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 70) {
        cout << "Grade: B" << endl;
    } else if (marks >= 60) {
        cout << "Grade: C" << endl;
    } else if (marks >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}
