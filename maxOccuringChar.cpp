#include <iostream>
using namespace std;

char getMaxOccCharacter(string s) {
    int arr[26] = {0};

    // Count frequency of each character
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int number = 0;

        // Check for lowercase letters
        if (ch >= 'a' && ch <= 'z') {
            number = ch - 'a';
        }
        // Check for uppercase letters
        else if (ch >= 'A' && ch <= 'Z') {
            number = ch - 'A';
        }

        arr[number]++;
    }

    // Find the character with the maximum frequency
    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans; // Convert the index back to a character
    return finalAns;
}

int main() {
    string s;
    cin >> s;
    cout << getMaxOccCharacter(s) << endl;
    return 0;
}
