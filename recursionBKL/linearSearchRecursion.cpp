#include<iostream>
using namespace std;
void print(int arr[], int n){
    cout<<"Size of array is"<<n <<endl;
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
bool linearSearch(int* arr, int size, int key) {
    print(arr,size);
    // Base case
    if (size == 0) { // If size is zero, key is not present
        return false;
    }
    
    // Check if the first element matches the key
    if (key == arr[0]) {
        return true;
    }
    
    // Recursive call on the remaining array
     bool ans = linearSearch(arr + 1, size - 1, key);
     return ans;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 5;
    
    bool ans = linearSearch(arr, size, key);
    
    if (ans) {
        cout << "Key is present" << endl;
    } else {
        cout << "Key is not present" << endl;
    }
    
    return 0;
}
