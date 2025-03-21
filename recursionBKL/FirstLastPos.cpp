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

    vector<int> totalOccurance(vector<int>& nums, int target) {
        return {lastOcc(nums, target) - firstOcc(nums, target)};
    }
   int main( ){
     int arr[8]={1,2,3,3,3,3,5};
     int target =3;
    cout<<" Total Occurance of 3 is :" << totalOccurance(arr[],target ) <<endl;
      }
