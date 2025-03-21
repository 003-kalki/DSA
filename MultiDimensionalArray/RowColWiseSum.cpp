#include<iostream>
using namespace std;
#include <climits>
int largestRowSum(int arr[][3],int row, int col){
    int maxi = INT_MIN;
    int rowIndex =-1;
 for(int row=0;row<3;row++){
    int sum = 0;
    for(int col=0;col<3;col++){
        sum+= arr[row][col];

    }
    if(sum >maxi){
        maxi = sum;
        rowIndex = row;
    }
}

}
void RowSum(int arr[][3],int row,int col){
    cout<<"printing row wise sum"<<endl;
     for(int row=0; row<3;row++){
        int sum =0;
        for(int col=0;col<3;col++){
            sum += arr[row][col];
        }
        cout <<sum<<" ";
     }
     cout<<endl;
}
void ColSum(int arr[][3],int row,int col ){
     cout<<"Printing colum wise Sum" <<endl;
     for(int col=0; col<3;col++){
        int sum =0;
        for(int row=0;row<3;row++){
            sum += arr[row][col];
        }
        cout <<sum<<" ";
     }
     cout<<endl;

}

int main( ){
     int array1[3][3];
 for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){  
           cin>>array1[row][col];
        }
    }

   
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << array1[row][col] << " ";
        }
        cout << endl;
    }
    RowSum(array1,3,3);
    ColSum(array1,3,3);
   
    return 0;
}