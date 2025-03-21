#include <iostream>
using namespace std;

int main() {
    int arr[5] = {6, 5, 4, 3, 2};
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]) / 2; i++) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Print the reversed array
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}