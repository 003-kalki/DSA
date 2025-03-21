// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void swap (int & a ,int & b){
    a = a ^ b;
    b = a ^b;
    a = a ^ b;
  
}

int main() {
    // Write C++ code here
   
int a = 6 ,b = 9;
cout<<a<< " "<<b<<endl;
 swap(a,b);
 
 cout << "Swapped Value: " << a << " " << b << endl;

    return 0;
}