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