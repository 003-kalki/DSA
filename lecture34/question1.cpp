#include<iostream>
using namespace std;

void reverseString(string& str, int i, int j) {
    // Base case
    if (i >= j) {
        return;
    }
    
    // Swap characters
    swap(str[i], str[j]);
    
    // Recursive call
    reverseString(str, i + 1, j - 1);
}

int main() {
    string name = "shyam";
    cout << "\nOriginal String: " << name << endl;
    
    reverseString(name, 0, name.length() - 1);
    
    cout << "Reversed String: " << name << endl;
    return 0;
}
