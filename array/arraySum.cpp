#include <iostream>
#include<vector>
#include<numeric>
int ArraySum(const std::vector<int> arr, int n){
    return std::accumulate(arr.begin(), arr.end(), 0);
}

int main(){
    int size;
    std::cout<<"Enter the size of array:"<<" ";
    std::cin>>size;
    std::vector<int> arr(size);
std::cout<<"Enter the number of elemets in the array: "<<" ";
 for(int i=0;i<size;i++){
    std::cin>>arr[i];
 }
 std::cout<<"Printing the array:";
 for(int i=0; i<size;i++){
    std::cout<<arr[i]<<" ";
 }
 int sum= ArraySum(arr,size);
 std::cout<<"Sum of an array is:"<<sum<<std::endl; 

}