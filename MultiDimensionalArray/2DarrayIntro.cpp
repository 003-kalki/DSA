#include<iostream>
using namespace std;

   bool isPresent(int arr[][4] ,int target,int row,int col ){
       for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col] == target){
                return 1;
            }
        }
       }
   }

int main( ){
  
    int array1[3][4];
   // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  //  int arr[3][4] ={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

   //taking input -> row wise input
   /*
      for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){  
           cin>>array1[row][col];
        }
    }
   */
    //taking input -> col wise input
   /*
      for(int col = 0; col < 3; col++){
        for(int row = 0; row < 4; row++){  
           cin>>array1[row][col];
        }
    }
   */
    
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){  
           cin>>array1[row][col];
        }
    }

   
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << array1[row][col] << " ";
        }
        cout << endl;
    }
      cout<<"Enter the element to search"<<endl;
      int target;
      cin >> target;
      if(isPresent(array1,target,3,4)){
        cout<<"Element found"<<endl;

      }else{
        cout<<"Not Found"<<endl;
      }
     

    return 0;
}
