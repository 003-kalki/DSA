#include <iostream>
using namespace std;

// Capitalizes a character if it's lowercase
char Capitalized(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;
    }
    return ch;
}

string CamelCase(string s) {
    bool newWord = false; // Indicates if the next character should be capitalized
    bool firstWord = true; // Keeps track if it's the first word
    string temp = "";

    for (char ch : s) {
        if (ch != ' ') { // If it's a non-space character
            if (newWord && !firstWord) {
                temp += Capitalized(ch); // Capitalize the first letter of new word (not the first word)
                newWord = false; // Reset the flag
            } else {
                temp += ch; // Add the character as-is
            }
            firstWord = false; // After first non-space char, firstWord is false
        } else {
            newWord = true; // When space is found, next character is a new word
        }
    }

    return temp;
}
   /* alternate approach 
   // C++ program to convert given sentence to camel case

#include <iostream>
using namespace std;

string convertToCamelCase(string &s) {
    string res = "";

    // Flag to indicate when to capitalize the next letter
    bool capitalizeNext = false;

    for(int i = 0; i < s.length(); i++) {

        // If we encounter a space, set the flag to capitalize
        // the next character
        if (s[i] == ' ') {
            capitalizeNext = true;
        }

        // If the flag is set, capitalize the current character
        else if (capitalizeNext == true) {
            res += toupper(s[i]);

            // Reset the flag after capitalization
            capitalizeNext = false;
        }

        // Otherwise, just add the current character to the result
        else {
            res += s[i];
        }
    }

    return res;
}

int main() {
    string s = "i got intern at geeksforgeeks";
    cout << convertToCamelCase(s);
    return 0;
}
   */

int main() {
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    cout << CamelCase(s) << endl;
    return 0;
}
