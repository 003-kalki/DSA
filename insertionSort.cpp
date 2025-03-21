#include <iostream>
#include <vector>

using namespace std;

// Function to perform insertion sort using swapping logic
void insertionSortWithSwapping(vector<int>& arr) {
    int n = arr.size();
    
    // Start from the second element
    for (int i = 1; i < n; i++) {
        int j = i;

        // Swap the current element with the previous one until it's in the correct position
        while (j > 0 && arr[j] < arr[j - 1]) {
            swap(arr[j], arr[j - 1]); // Swap the elements
            j--;
        }
    }
}

int main() {
    // Example array to be sorted
    vector<int> arr = {12, 11, 13, 5, 6};
    
    cout << "Array before sorting: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // Perform insertion sort using swapping logic
    insertionSortWithSwapping(arr);

    cout << "Array after sorting: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
