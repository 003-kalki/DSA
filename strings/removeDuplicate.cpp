#include <iostream>
using namespace std;

string removeDuplicates(string s) {
    bool hasDuplicates; // Flag to check if duplicates were removed
    do {
        hasDuplicates = false; // Reset flag for each pass
        string temp = ""; // Temporary string to store the new result after removal

        for (int i = 0; i < s.size(); i++) {
            if (i < s.size() - 1 && s[i] == s[i + 1]) {
                // If duplicate is found, skip both characters
                i++; 
                hasDuplicates = true; // Set flag to true if removal happens
            } else {
                // Otherwise, add the character to the new string
                temp += s[i];
            }
        }

        s = temp; // Update the original string with the new one
    } while (hasDuplicates); // Continue if any duplicates were removed in this pass

    return s;
}

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    cout << "Result after removing duplicates: " << removeDuplicates(s) << endl;
    return 0;
}
