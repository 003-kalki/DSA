#include <fstream>
#include<iostream>
#include<string>

int main(){
    std::ifstream myFile("example.txt");
    if(!myFile){
        std::cerr<<"Error opening file for reading."<<std::endl;
        return 1;
    }
    std::string line;
    while (getline(myFile,line)){
        std::cout<<line<<std::endl;

    }
    myFile.close();
    return 0;
}