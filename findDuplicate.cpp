#include <iostream>
#include <vector>
/*   //  SOLUTION 1 //
bool findDuplicate(std::vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        int count = 0; // Reset count for each element
        for(int j = 0; j < arr.size(); j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        // If count > 1, it means the element at arr[i] has a duplicate
        if(count > 1) {
            return true;
        }
    }
    return false; // If no duplicates are found
} */
  
     // SOLUTION 2//
     int findDuplicate(std::vector<int> &arr)
     {
        int ans=0;
        for(int i=0; i<arr.size();i++){
            ans = ans^arr[i];
        }
        for(int i=1; i< arr.size(); i++){
            ans = ans^i;
        }
        return ans;
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

    // Print the array
    std::cout << "Original Array: " << std::endl;
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Call the function to find a duplicate element
   int ans=   findDuplicate(arr);
 
    std::cout<<"answer is "<<ans;
    return 0;
}
