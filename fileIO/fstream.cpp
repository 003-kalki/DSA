#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //create a fstream object named myFile to open "example.txt" for both reading and writing 
    fstream MyFile("example.txt",ios::in | ios::out | ios::trunc);
    if(!MyFile){
        cout<<"Error opening file"<<endl;
        return 1;
    }
    MyFile<<"This is a test line. "<<endl;
    MyFile.seekg(0);
    string line;
    while( getline(MyFile,line)){
        cout<<"Read from file:"<< line <<endl;

    }
    MyFile.close();
    return 0;
}