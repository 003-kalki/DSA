#include<iostream>
using namespace std;

long int power(int a,int b){
    //base case 
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
   
     
     //Recursive call 
     int  ans = power(a,b/2);

     //if b is even
     if(b%2 ==0){
        return ans*ans;
     }
     else{
        //if b is odd
        return a*ans*ans;
     }
}

int main( ){
    int a = 2;
    int b=10;
    cout<<"2 power 10 is: "<<power(a,b)<<endl;
}