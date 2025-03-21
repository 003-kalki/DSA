#include <iostream>
#include <string>
 std::string reverseEachWord(const std::string& s){
    std::string word;
    std::string result;
    for(char ch : s){
        if(ch != ' '){
            word +=ch;
        }else if(ch == ' '){
            result += reverseWords(word) + ' ';
            word.clear( );

        }
    }
     while ( result.back() == ' ') {
        result.pop_back();
    }

    return result;
 }
 std::string reverseWords(const std::string& s){
    int n= s.length();
    std::string result;
    for(int i=n-1;i>=0;i--){
        result.push_back(s[i]);
        
    }
    return result;
 }
std::string removeExtraSpaces(const std::string& str) {
     if(str == " "){
            return str;
        }
    std::string result;
    bool inWord = false; 

    
    for (char ch : str) {
        
        if (ch != ' ') {
            result += ch; 
            inWord = true; 
        } else if (inWord) {
            
            result += ' ';
            inWord = false; 
        }
    }

    
    while ( result.back() == ' ') {
        result.pop_back();
    }

    return result;
}

int main() {
    std::string s = " pqr mno ";
    std::string cleanedString = removeExtraSpaces(s);
   
    std::string finalresult = reverseEachWord(cleanedString);
    std::cout << finalresult << " " <<std::endl; // Output: 'pqr mno'
    return 0;
}
