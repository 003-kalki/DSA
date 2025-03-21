#include <fstream>
#include<iostream>

int main() {
  std::ofstream myFile("loduAbinav.txt");
  
  if(!myFile){
    std::cerr <<" Error opening file for writing"<< std::endl;
    return 1;
  }
  myFile <<"Abinav Mera Beta Hai raat bhar muh me letra hai!" <<std::endl;
  myFile.close();
  return 0;
 }