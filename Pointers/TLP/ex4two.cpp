#include<iostream>
#include<string>
      
char*subString(char*arrayString,int start,int length,int size){
    if(start <0 || start >=size){
        std::cout<<"Error:start is out of bound";
        return nullptr;
    }

    if(start+length > size){
        length = size-start;
    }
        char*newString = new char[length+1];
      for (int i = start; i < start + length; i++) {  
        newString[i - start] = arrayString[i]; // Copying the substring
    }

newString[length] = '\0';

 return newString;
    }

typedef char*arrayString;
 
int main(){
    int size;
 std::cout<<"Enter the size of  string";

 std::cin>>size;
 std::cin.ignore();
 arrayString str = new char[size + 1];

 std::cout<<"Enter a string:";
 std::cin.getline(str,size+1);
 
 
 int startlen;
  std::cout<<"Enter the starting length:";
  std::cin>>startlen;
 int charlen;
 std::cout<<"Enter character length:";
 std::cin>>charlen;

char*result= subString(str,startlen,charlen,size); //call the subString function

  if (result != nullptr) {
        std::cout << "Substring: " << result << std::endl;
        delete[] result; // Free allocated memory
    }
 
 delete[] str;
 return 0;
 
 }
 
