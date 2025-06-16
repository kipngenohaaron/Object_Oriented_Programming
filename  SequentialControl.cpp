// 🔹 1. Simple Interest Calculator 
// #include <iostream>
using namespace std;
int main() {
    float principal, rate, time, interest;

    cout << "Enter Principal Amount: ";
    cin >> principal;
    cout << "Enter Rate of Interest: ";
    cin >> rate;
    cout << "Enter Time (in years): ";
    cin >> time;

    // Simple Interest Formula: SI = (P * R * T) / 100
    interest = (principal * rate * time) / 100;

    cout << "Simple Interest: " << interest << endl;

    return 0;
}

// 🔹 2. Area and Perimeter of a Rectangle