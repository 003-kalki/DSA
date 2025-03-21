#include <iostream>
#include <vector>

std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    
   /*
    // Loop through both arrays to find common elements
    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                // Check if the element is already in the result vector
                bool isDuplicate = false;
                for (int k = 0; k < result.size(); k++) {
                    if (result[k] == nums1[i]) {
                        isDuplicate = true;
                        break;
                    }
                }
                
                // If it's not a duplicate, add it to the result
                if (!isDuplicate) {
                    result.push_back(nums1[i]);
                }
            }
        }
    }

    return result;
    */
                                 // more optimized solutinn considering the array is sorted//

   int i=0 ,j=0;
   std::vector<int> result;
   while(i< nums1.size() &&  j<nums2.size()) {
    if(nums1[i] == nums2[j] ){
        result.push_back(nums1[i]);
          i++;
          j++;
    } 
    else if (nums1[i] < nums2[j]){
        i++;
    }
    else{
        j++;
    }
   }
   return result;                   
}


int main() {
    std::vector<int> nums1;
    int num;

    std::cout << "Enter numbers for the nums1 array (enter -1 to stop): " << std::endl;
    while (true) {
        std::cin >> num;
        if (num == -1) {
            break;
        }
        nums1.push_back(num);
    }

    std::vector<int> nums2;
    int num2;
    std::cout << "Enter numbers for the nums2 array (enter -1 to stop): " << std::endl;
    while (true) {
        std::cin >> num2;
        if (num2 == -1) {
            break;
        }
        nums2.push_back(num2);
    }

    // Call the intersection function and store the result
    std::vector<int> result = intersection(nums1, nums2);

    // If result is empty, print -1, otherwise print the result
    if (result.empty()) {
        std::cout << "-1" << std::endl; // Correctly return -1 if no intersection found
    } else {
        std::cout << "Intersection of arrays: ";
        for (int num : result) {
            std::cout << num << " ";  
        }
        std::cout << std::endl;
    }

    return 0;
}
