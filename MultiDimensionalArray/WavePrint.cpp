#include<iostream>
using namespace std;
#include <climits>


void wavePrint(int arr[][3], int row, int col) {
    for (int c = 0; c < col; c++) {
        if (c % 2 == 0) {
            
            for (int r = 0; r < row; r++) {
                cout << arr[r][c] << " ";
            }
        } else {
          
            for (int r = row - 1; r >= 0; r--) {
                cout << arr[r][c] << " ";
            }
        }
    }
    cout << endl; 
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
    wavePrint(array1,3,3);
   
   
    return 0;
};