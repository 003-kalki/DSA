#include<iostream>
using namespace std;

bool isPalindrome(string& str, int i, int j) {
    // Base case
    if (i >= j) {
        return true;
    }
    if (str[i] == str[j]) {
        return isPalindrome(str, i + 1, j - 1);
    } else {
        return false;
    }
}

int main() {
    string word = "dick";
    cout << "\nOriginal String: " << word << endl;
    
    bool ans = isPalindrome(word, 0, word.length() - 1);
    
    if (ans) {
        cout << "Given string is a palindrome." << endl;
    } else {
        cout << "Given string is NOT a palindrome." << endl;
    }
    
    return 0;
}
