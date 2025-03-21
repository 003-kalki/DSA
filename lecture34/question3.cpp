#include<iostream>
using namespace std;

int power(int a,int b){
    //base case 
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans= a ;
    return ans * power(a,b-1);
    
 
}

int main( ){
    int a = 2;
    int b=100;
    cout<<"2 power 10 is: "<<power(a,b)<<endl;
}