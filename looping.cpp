// for Loop – Print numbers 1 to 10 
#include <iostream>
using namespace std;

int main() {
    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
// while Loop – Sum of numbers until 0 is entered
#include <iostream>
using namespace std;
int main() {
    int number, sum = 0;

    cout << "Enter numbers to sum (0 to stop): ";
    while (true) {
        cin >> number;
        if (number == 0) {
            break; // Exit loop if 0 is entered
        }
        sum += number; // Add number to sum
    }

    cout << "Total Sum: " << sum << endl;
    return 0;
}

// do-while Loop – Password validation
    #include <iostream>
using namespace std;

int main() {
    string password;

    // Always execute at least once
    do {
        cout << "Enter password: ";
        cin >> password;
    } while (password != "admin123");

    cout << "Access granted!" << endl;
    return 0;
}

// do-while Loop – Guessing game
#include <iostream>
using namespace std;
int main() {
    int secretNumber = 7, guess;
    int attempts = 0;

    do {
        cout << "Guess the secret number (1-10): ";
        cin >> guess;
        attempts++;
        
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
// foreach Loop – Print elements of an array
#include <iostream>
using namespace std;    
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}