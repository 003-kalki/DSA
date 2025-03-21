// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int evenOdd(int & a){
  
     if(a %2 ==0)  {
        return 0;
     } 
     else{
        return 1;
     }

}

int main() {
    // Write C++ code here
   
int a = 6;
 int ans = evenOdd(a);
 
 cout<<ans<<endl;

    return 0;
}