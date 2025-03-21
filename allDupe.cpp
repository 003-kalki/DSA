#include <iostream>
#include <vector>
#include<algorithm>
std::vector<int> allDupe(const std::vector<int> &arr) {
    std::vector<int> updArr;

    for (int i = 0; i < arr.size(); i++) {
        int count = 0;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        // If the count is exactly 2, add the element to the updated array
        if (count == 2) {
            // To avoid adding the same duplicate multiple times, check if it's already in updArr
            if (std::find(updArr.begin(), updArr.end(), arr[i]) == updArr.end()) {
                updArr.push_back(arr[i]);
            }
        }
    }

    return updArr; // Return the updated array
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

    // Print the original array
    std::cout << "Original Array: " << std::endl;
    for (int i = 0; i < .size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Call the function to find all duplicates and store in updatedArray
    std::vector<int> updatedArray = allDupe(arr);

    // Print the updated array with elements that appeared twice
    std::cout << "Array with elements that appeared twice: " << std::endl;
    for (int i = 0; i < updatedArray.size(); i++) {
        std::cout << updatedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
