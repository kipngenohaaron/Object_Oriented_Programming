// ✅ switch-case in C++
// The switch statement allows you to choose between multiple options based on the value of a variable or expression (usually int or char).
//  break ends the current case — if you omit it, the next case will execute too (called “fall-through”).

// 🎯 Program: Simple Calculator
#include <iostream>
using namespace std;
int main() {
    char operation;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}

// ✅ 4. Switch Case Example
// 🎯 Program: Day of the Week  
#include <iostream>
using namespace std;
int main() {
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl;
    }

    return 0;
}

// School Grading System Using switch
#include <iostream>
using namespace std;
int main() {
    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    switch (marks / 10) {
        case 10:
        case 9:
            cout << "Grade: A" << endl;
            break;
        case 8:
            cout << "Grade: B" << endl;
            break;
        case 7:
            cout << "Grade: C" << endl;
            break;
        case 6:
            cout << "Grade: D" << endl;
            break;
        default:
            cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}
//  Electricity Bill Calculator Using switch
// Electricity Bill Formula:
// Total Bill=(Units Used×Rate per Unit)+Fixed Charge+Taxes
// Total Bill=(Units Used×Rate per Unit)+Fixed Charge+Taxes

// Where:

//     Units Used = Final meter reading − Initial meter reading
//     Rate per Unit = Cost per unit of electricity (e.g., Ksh 10 per unit)
//     Fixed Charge = Base service fee (e.g., Ksh 150 per month)
//     Taxes = Additional charges (e.g., VAT, fuel levy, environmental tax)
#include <iostream>
using namespace std;

int main() {
    int category;
    float units, bill;

    cout << "Select Customer Type:\n1. Domestic\n2. Commercial\nEnter choice: ";
    cin >> category;

    cout << "Enter units consumed: ";
    cin >> units;

    switch(category) {
        case 1: // Domestic
            if (units <= 100)
                bill = units * 5;
            else
                bill = 100 * 5 + (units - 100) * 8;
            cout << "Domestic Electricity Bill = Ksh. " << bill << endl;
            break;

        case 2: // Commercial
            if (units <= 100)
                bill = units * 10;
            else
                bill = 100 * 10 + (units - 100) * 15;
            cout << "Commercial Electricity Bill = Ksh. " << bill << endl;
            break;

        default:
            cout << "Invalid customer category!" << endl;
    }

    return 0;
}

// ✅ 5. Ternary Operator Example
// 🎯 Program: Check if a number is even or odd using the ternary operator
