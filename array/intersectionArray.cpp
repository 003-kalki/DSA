#include<iostream>
#include <algorithm>
#include <vector>
 std::vector<int> intersection(std::vector<int>& nums1,std:: vector<int>& nums2) {
         
         std::vector<int> ans;
       std::sort(nums1.begin(), nums1.end()); 
        
        
      
    for (int i = 0; i < nums2.size(); i++) { // Standard for loop
        int target = nums2[i];
        int start = 0;.
        int end = nums1.size() - 1;
             
             while(start<=end){
                int mid = start +(end - start)/2;
               if (nums1[mid] == target) {
                // Check if this target is already in ans
                if (std::find(ans.begin(), ans.end(), target) == ans.end()) {
                    ans.push_back(target); // Add target to ans
                }
                break; // Exit the loop after finding
            } 
                else if(nums1[mid]>target){

                   end = mid-1;
                }
                else{
                    start = mid+1;
                }
             }
         }
         return ans;
   }
   void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

 int main(){
    std::vector<int> nums1;
    std::vector<int>nums2;
    int num1,num2;
    std::cout<<"Enter elements for nums1:"<<std::endl;
     while(true){
        std::cin>>num1;
        if(num1 == -1){
            break;
        }
      nums1.push_back(num1);
    }
     std::cout<<"Enter elements for nums2:"<<std::endl;
     while(true){
        std::cin>>num2;
        if(num2 == -1){
            break;
        }
       nums2.push_back(num2);
    }

   std::vector<int> answer = intersection(nums1, nums2);
      std::cout << "Intersection of nums1 and nums2: ";
    printVector(answer);
    return 0;
}