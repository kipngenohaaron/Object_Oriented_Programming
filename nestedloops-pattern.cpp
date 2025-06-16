// ⭐ 1. Pyramid Star Pattern
// This program prints a pyramid pattern using nested loops.
// The number of rows in the pyramid is determined by user input.
// Example output for n = 5:
    *       
   ***  
  *****  
 *******  
*********
#include <iostream>
using namespace std;    
int main() {
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}
// 🔢 2. Number Triangle Pattern
// This program prints a number triangle pattern using nested loops.
1
12
123
1234
12345

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows for the triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        // Print numbers
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

// 🧱 3. Hollow Rectangle Pattern
// This program prints a hollow rectangle pattern using nested loops.
*****
*   *
*   *
*   *
*****

#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows and columns for the rectangle: ";
    cin >> rows >> cols;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            // Print '*' for the first and last row/column
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                cout << " "; // Print space for hollow part
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}   
// 🔲 4. Checkerboard Pattern   
// This program prints a checkerboard pattern using nested loops.
* * * * *
 * * * * 
* * * * *
 * * * * 

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    for (int i = 1; i <= rows; i++) {
        // Add space to every alternate row
        if (i % 2 == 0) {
            cout << " ";
        }

        for (int j = 1; j <= cols; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
// 💎 6. Diamond Star Pattern
// This program prints a diamond pattern using nested loops.
// Example output for n = 5:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (half of diamond): ";
    cin >> n;

    // Top half
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
        cout << endl;
    }

    return 0;
}
