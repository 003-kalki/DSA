#include <iostream>
#include <vector>



void findUnq(std::vector<int>& arr) {
    int result = 0; // Initialize result to 0
    for(int i = 0; i < arr.size(); i++) {
        result ^= arr[i]; // XOR each element with result
    }
    std::cout << "Unique number in the array is: " << result << std::endl;
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
    findUnq(arr);

    return 0;
}
