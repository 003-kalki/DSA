#include<iostream>
using namespace std;


int factorial(int n){
    if(n==0){
        return 1;
       
    }
     int smallerProblem = factorial(n-1);
     

     return n*smallerProblem;
}
int main ( ){

int n;
cin>>n;
int ans = factorial(n);
cout<<ans<<endl;
 }