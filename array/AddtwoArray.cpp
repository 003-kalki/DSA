#include <iostream>
#include <vector>
#include <algorithm>  // For std::swap

std::vector<int> reverse(std::vector<int> v) {
    int s = 0;
    int e = v.size() - 1;
    while (s < e) {
        std::swap(v[s++], v[e--]);
    }
    return v;
}

std::vector<int> findArraySum(std::vector<int>& a, int n, std::vector<int>& b, int m) {
    int i = n - 1;
    int j = m - 1;
    int carry = 0;  // Only declare carry once
    std::vector<int> ans;

    while (i >= 0 && j >= 0) {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // Handle remaining elements of array a
    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // Handle remaining elements of array b
    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // If carry remains, add it to the result
    if (carry) {
        ans.push_back(carry);
    }

    return reverse(ans);
}

int main() {
    std::vector<int> nums1;
    std::vector<int> nums2;
    int n, k, m;
    
    std::cout << "Enter the size of array 1: ";
    std::cin >> k;
    std::cout << "Enter numbers for the nums1 array (enter -1 to stop): ";
    while (true) {
        std::cin >> n;
        if (n == -1) {
            break;
        }
        nums1.push_back(n);
    }

    std::cout << "Enter the size of array 2: ";
    std::cin >> m;
    std::cout << "Enter numbers for the nums2 array (enter -1 to stop): ";
    while (true) {
        std::cin >> n;
        if (n == -1) {
            break;
        }
        nums2.push_back(n);
    }

    std::vector<int> result = findArraySum(nums1, k, nums2, m);

    std::cout << "Resultant array after addition: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
