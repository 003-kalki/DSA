#include<iostream>
using namespace std;

int count =0;
void stackOverflow(){
    count++;
    stackOverflow();
}
int main(){
    stackOverflow();
    return 0;
}