// ✅ 3. Nested if-else Example
// 🎯 Program: Age Group Classification 

#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age!" << endl;
    } else {
        if (age < 13) {
            cout << "You are a child." << endl;
        } else if (age < 20) {
            cout << "You are a teenager." << endl;
        } else if (age < 65) {
            cout << "You are an adult." << endl;
        } else {
            cout << "You are a senior citizen." << endl;
        }
    }

    return 0;
}
// ✅ 3. Nested if Example
// 🎯 Program: Check if a number is positive and even
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
        if (number % 2 == 0) {
            cout << "The number is even." << endl;
        } else {
            cout << "The number is odd." << endl;
        }
    } else {
        cout << "The number is not positive." << endl;
    }

    return 0;
}   
