#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int row = matrix.size();
     int col = matrix[0].size();

     int start =0;
     int end = row*col -1;

     int mid = start +(end- start)/2;
     while(start <=end){
        int element = matrix[mid/col][mid%col];
        if(element == target){
            return 1;
        }
        if(element <= target){
            start = mid+1;

        }
        mid = start + (end - start)/2;
     }
       return 0;
}

// Driver function
int main() {
    // Example 2D matrix
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    // Example target to search
    int target;
    cout << "Enter the target value: ";
    cin >> target;

    // Call the searchMatrix function and print the result
    if (searchMatrix(matrix, target)) {
        cout << "Target " << target << " found in the matrix.\n";
    } else {
        cout << "Target " << target << " not found in the matrix.\n";
    }

    return 0;
}
