#include<iostream>
using namespace std;

/*
int main(){
   int arr[10] = {5,7, -2,10,22, -2, 0, 5, 22, 1};
   //whether 1 is present or not ?
   int num;
   cout<<"Enter number to find:";
  cin>>num;
  int count = 0;
  for(int i=0; i <10; i++){
    if(arr[i] != num){
        count++;
    }  
  }
 cout<<"number is at"<<count<<"" <<"index"<<endl;
  }
*/
bool search(int arr[],int size,int key){
   for(int i= 0; i<size; i++){   
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
   }

int main(){
   int arr[10] = {5,7, -2,10,22, -2, 0, 5, 22, 1};
   cout<<"Enter the element to search for"<<endl;
   int key;
   cin>>key;
   bool found = search(arr,10,key);
   if(found){
    cout<<"key is present"<<endl;
   }
   else{
    cout<<"Key is absent "<<endl;
   }
   return 0;
}

