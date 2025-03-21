#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> // Add this line

int maximum(const std::vector<int> arr, int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = std::max(maxi,arr[i]);
    }
    return maxi;
}

int main(){
    int size;
    std::cout<<"Enter the size of array:"<<" ";
    std::cin>>size;
    std::vector<int> arr(size);
    std::cout<<"Enter the number of elements in the array: "<<" ";
    for(int i=0;i<size;i++){
        std::cin>>arr[i];
    }
    std::cout<<"Printing the array:";
    for(int i=0; i<size;i++){
        std::cout<<arr[i]<<" ";
    }
    int max = maximum(arr,size);
    std::cout<<"Maximum number in the array is:"<<" "<<max<<std::endl; // Don't forget to print the max value!
    return 0;
}