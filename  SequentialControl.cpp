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
#include <iostream>
using namespace std;
int main() {
    float length, width, area, perimeter;

    cout << "Enter Length of Rectangle: ";
    cin >> length;
    cout << "Enter Width of Rectangle: ";
    cin >> width;

    // Area Formula: A = L * W
    area = length * width;
    // Perimeter Formula: P = 2 * (L + W)
    perimeter = 2 * (length + width);

    cout << "Area of Rectangle: " << area << endl;
    cout << "Perimeter of Rectangle: " << perimeter << endl;

    return 0;
}
// 🔹 3. Temperature Conversion (Celsius to Fahrenheit )
#include <iostream>
using namespace std;
int main() {
    float celsius, fahrenheit;

    cout << "Enter Temperature in Celsius: ";
    cin >> celsius;

    // Conversion Formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}
// 🔹 4. Factorial of a Number
#include <iostream>
using namespace std;
int main() {
    int number;
    long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i; // Calculate factorial
        }
        cout << "Factorial of " << number << " = " << factorial << endl;
    }

    return 0;
}