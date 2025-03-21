#include <iostream>
#include <vector>
/*

//unoptimized code //

void swapAlter(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        // Swap the elements at index i and i+1
        if(arr[i+1] <n){
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        }
    }

    std::cout << "Printing updated Array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl; // Add a newline after printing the array
}

int main() {
    int size;
    std::cout << "Enter the size of the array: " << " " ;
    std::cin >> size;

    int arr[size]; // Note: Variable-length arrays are not standard in C++. Use std::vector for dynamic arrays.
    
    std::cout << "Enter the numbers for the array: " << " ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Print the array before swapping
    std::cout << "Original Array: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl; // Add a newline after printing the array

    // Call the function to swap alternate elements
    swapAlter(arr, size);

    return 0;
}
*/

// Optimized code implementing push pop ,vector  industry level practices 


// Modify swapAlter to accept std::vector<int>
void swapAlter(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i += 2) {
        // Swap the elements at index i and i+1
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }

    std::cout << "Printing updated Array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl; // Add a newline after printing the array
}

int main() {
    std::vector<int> arr; // Create an empty dynamic vector
    int num;

    std::cout << "Enter numbers for the array (enter -1 to stop): " << std::endl;
    
    // Keep reading until the user inputs -1
    while (true) {
        std::cin >> num;
        if (num == -1) {
            break; // Stop taking input if -1 is entered
        }
        arr.push_back(num); // Dynamically add the number to the vector
    }

    // Print the array before swapping
    std::cout << "Original Array: " << std::endl;
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Call the function to swap alternate elements
    swapAlter(arr);

    return 0;
}
