#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    
    // Printing the upper half of the diamond
    for(int row = 1; row <= n; row++) {           // Outer loop for rows
        for(int space = n - row; space > 0; space--) { // Loop for spaces
            cout << " ";
        }
        for(int col = 1; col <= (2*row - 1); col++) {     // Inner loop for stars
            cout << "*";
        }
        cout << endl;
    }
    
    // Printing the lower half of the diamond
    for(int row = n-1; row >= 1; row--) {           // Outer loop for rows
        for(int space = n - row; space > 0; space--) { // Loop for spaces
            cout << " ";
        }
        for(int col = 1; col <= (2*row - 1); col++) {     // Inner loop for stars
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}