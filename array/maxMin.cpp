#include<iostream>
#include <climits>
using namespace std;

int getMax(int num[],int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
       maxi = max(maxi,num[i]); //inbuilt function to find maximum number 
      //  if(num[i]>max){
       //     max = num[i];
       // }
    }
    return max;
}
int getMin(int num[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        mini = min(mini,num[i]); //using inbuilt function find minimum
       // if(num[i] < min){
        //    min  = num[i];
      //  }
    }
    return min;
}

int main(){

int size;
cout<<"Enter size";
cin>>size;
 int num[100];
 for(int i=0; i<size;i++){
    cin>>num[i];
 }
      cout<<"Maximum value is"<< getMax(num,size)<<endl;
      cout<<"minimum value is"<<getMin(num,size)<<endl;
}