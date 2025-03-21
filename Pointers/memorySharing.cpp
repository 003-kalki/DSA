#include<iostream>
using namespace std;
void refParamFunction (int &x){
    x = 69;
   }
int main( ){
   
   int n = 5;
   refParamFunction(n);
   cout<<n<<"\n";
}