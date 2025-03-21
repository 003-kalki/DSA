#include<iostream>
#include<vector>

int getPivot(std::vector<int> arr){
   int s =0, e = arr.size()-1;
   int mid = s + (e-s)/2;
   while(s<e){
    if(arr[mid] >= arr[0]){
        s = mid+1;

    }
    else{
        e = mid;
    }
    mid = s+(e-s)/2;
   }
   return s;
}

int main( ){
    std::vector<int> arr;
   
    int num;
    while(true){
        std::cin>>num;
    if(num == -1){
       break;      
    }
     arr.push_back(num);
    }

    std::cout<<"Pivot is:"<<" "<<getPivot(arr) <<std::endl;
} 