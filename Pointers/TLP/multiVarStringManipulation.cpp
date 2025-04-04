#include <iostream>
using namespace std;

typedef char* arrayString;

char characterAt(arrayString s, int position) {
    return s[position];
}

int length(arrayString s) {
    int count = 0;
    while (s[count] != 0) {
        count++;
    }
    return count;
}

void append(arrayString& s, char c) {
    int oldLength = length(s);
    arrayString newS = new char[oldLength + 2];

    for (int i = 0; i < oldLength; i++) {
        newS[i] = s[i];
    }
    
    newS[oldLength] = c;
    newS[oldLength + 1] = 0;

    delete[] s;
    s = newS;
}

void concatenate(arrayString& s1, arrayString s2) {
    int s1_OldLength = length(s1);
    int s2_Length = length(s2);
    int s1_NewLength = s1_OldLength + s2_Length;

    arrayString newS = new char[s1_NewLength + 1];

    for (int i = 0; i < s1_OldLength; i++) {
        newS[i] = s1[i];
    }
    for (int i = 0; i < s2_Length; i++) {
        newS[s1_OldLength + i] = s2[i];
    }

    newS[s1_NewLength] = 0;

    delete[] s1;
    s1 = newS;
}

int main() {
    // Initialize an arrayString
    arrayString str1 = new char[6]{'H', 'e', 'l', 'l', 'o', 0};
    arrayString str2 = new char[7]{' ', 'W', 'o', 'r', 'l', 'd', 0};

    // Append a character
    append(str1, '!');
    cout << "After append: " << str1 << endl;

    // Concatenate str2 to str1
    concatenate(str1, str2);
    cout << "After concatenate: " << str1 << endl;

   char result  = characterAt(str1,4 );
  cout<<"position of character is at : "<< result;
    // Free memory
    delete[] str1;
    delete[] str2;

    return 0;
}
