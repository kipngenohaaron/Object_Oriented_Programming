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
// 🔹 5. Fibonacci Series
#include <iostream>
using namespace std;
int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        cout << t1 << " "; // Print the current term
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2; // Update t1 to the next term
        t2 = nextTerm; // Update t2 to the next term
    }
    cout << endl;

    return 0;
}
// 🔹 6. Prime Number Check 
// This program checks if a number is prime or not. 

#include <iostream>
using namespace std;
int main() {
    int number, i;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 1) {
        cout << number << " is not a prime number." << endl;
        return 0;
    }

    for (i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            isPrime = false; // Not a prime number
            break;
        }
    }

    if (isPrime)
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}
// 7. Convert Minutes to Hours and Minutes
#include <iostream>
using namespace std;
int main() {
    int totalMinutes, hours, minutes;

    cout << "Enter total minutes: ";
    cin >> totalMinutes;

    // Calculate hours and remaining minutes
    hours = totalMinutes / 60;
    minutes = totalMinutes % 60;

    cout << totalMinutes << " minutes is equal to " << hours << " hours and " << minutes << " minutes." << endl;

    return 0;
}
