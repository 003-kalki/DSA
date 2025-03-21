#include <iostream>
using namespace std;

int countDistinctWayToClimbStair(long long nStairs) {
  
    //base case
    if(nStairs <0){
        return 0;

    }
    if(nStairs ==0){
        return 1;
    }

    //recursive relation
    int ans = countDistinctWayToClimbStair(nStairs-1) +
              countDistinctWayToClimbStair(nStairs-2);

              return ans;  
}


int main() {
    long long n;
    cout << "Enter number of stairs: ";
    cin >> n;

    cout << "Number of distinct ways to climb " << n << " stairs = " 
         << countDistinctWayToClimbStair(n) << endl;

    return 0;
}
