#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> plusOne(std::vector<int>& digits){
         
    }
    
int main( ){
 std::vector<int> arr;
   std::cout<<" Enter the number of the element in the array:";
   int num;
  while (true) {
        std::cin >> num;
        if (num == -1) {
            break;
        }
        arr.push_back(num); 
    }
    std::vector<int> result = plusOne(arr);
        for(int i= 0;i<result.size();i++){
          std::cout<<result[i];
        }
    }

    
 