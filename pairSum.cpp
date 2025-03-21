#include <iostream>
#include <vector>
#include <algorithm> // Include this for min() and max()

std::vector<std::vector<int>> pairSum(std::vector<int> &arr, int n) {
    std::vector<std::vector<int>> ans;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == n) {
                std::vector<int> temp;
                temp.push_back(std::min(arr[i], arr[j])); // Use std::min()
                temp.push_back(std::max(arr[i], arr[j])); // Use std::max()
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main() {
    std::vector<int> arr; 
    int num;

    std::cout << "Enter numbers for the array (enter -1 to stop): " << std::endl;

    while (true) {
        std::cin >> num;
        if (num == -1) {
            break;
        }
        arr.push_back(num); 
    }

    std::cout << "Enter any ass random number: " << std::endl;
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> result = pairSum(arr, n);
            std::sort(result.begin(),result.end());
    // Output the result
    for (const auto &pair : result) {
        std::cout << "[" << pair[0] << ", " << pair[1] << "]" << std::endl;
    }

    return 0;
}
