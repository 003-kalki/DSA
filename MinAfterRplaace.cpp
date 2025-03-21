#include <iostream>
#include <vector>

int minElement(std::vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i], sum = 0;
        while (num != 0) {
            int ext = num % 10;
            sum += ext;
            num /= 10; 
        }
        nums.push_back(sum);
    }
    int minValue = nums[0]; 
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] < minValue) {
            minValue = nums[i];
        }
    }

    return minValue; // Return the minimum value found
}

int main() {
    std::vector<int> nums; 
    int num;

    std::cout << "Enter numbers for the array (enter -1 to stop): " << std::endl;

    while (true) {
        std::cin >> num;
        if (num == -1) {
            break;
        }
        nums.push_back(num); 
    }

    int result = minElement(nums);
    std::cout << "Minimum Element: " << result << std::endl;    
       
    return 0;
}