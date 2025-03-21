#include<iostream>
#include <vector>
using namespace std;


    int firstOccHelper(vector<int>& arr, int target, int s, int e) {
        if (s > e) return -1;
        
        int mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            int left = firstOccHelper(arr, target, s, mid - 1);
            return (left == -1) ? mid : left; // Ensure first occurrence is found
        } else if (target > arr[mid]) {
            return firstOccHelper(arr, target, mid + 1, e);
        } else {
            return firstOccHelper(arr, target, s, mid - 1);
        }
    }

    int lastOccHelper(vector<int>& arr, int target, int s, int e) {
        if (s > e) return -1;
        
        int mid = s + (e - s) / 2;
        if (arr[mid] == target) {
            int right = lastOccHelper(arr, target, mid + 1, e);
            return (right == -1) ? mid : right; // Ensure last occurrence is found
        } else if (target > arr[mid]) {
            return lastOccHelper(arr, target, mid + 1, e);
        } else {
            return lastOccHelper(arr, target, s, mid - 1);
        }
    }

    int firstOcc(vector<int>& arr, int target) {
        return firstOccHelper(arr, target, 0, arr.size() - 1);
    }

    int lastOcc(vector<int>& arr, int target) {
        return lastOccHelper(arr, target, 0, arr.size() - 1);
    }

   int totalOccurance(vector<int>& nums, int target) {
    int first = firstOcc(nums, target);
    int last = lastOcc(nums, target);
    if (first == -1) return 0; // If element not found
    return last - first + 1;
}
   int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 3, 5};
    int target = 3;
    
    cout << "Total Occurrence of " << target << " is: " 
         << totalOccurance(arr, target) << endl;
    
    return 0;
}
