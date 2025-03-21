#include<iostream>
using namespace std;
string replaceSpace(string &s){
   string result;
   for(char ch : s){
  
    if(ch !=' '){
        result +=ch;
    }
     else {
          result +=  "@40";
     }    
   }  
    return result;
} 
//alternate approach
 string replaceSpace2(string &s){
   
     for(int i =0; i<s.length();i++){
        if(s[i] == ' '){
        s.push_back('@');
        s.push_back('4');
        s.push_back('0');
     }
     else
     {
        i++;
     }
     }
     return s;
     
 }

int main ( ){
string s;
getline(cin,s);
cout<<replaceSpace2(s)<<endl;
return 0;
}