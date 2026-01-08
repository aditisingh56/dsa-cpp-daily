#include<iostream>
#include<vector>
using namespace std;
// 325. Maximum Size Subarray Sum Equals k.
// Given an array nums and a target value k, find the maximum length of a subarray
// that sums to k. If there isn't one, return 0 instead.
// this will work for non negative numbers only.

class Solution {
public:

int longestSubarrayWithSumK(vector<int>& nums, int k) {
    int i = 0, sum = 0, maxLen = 0;

    for (int j = 0; j < nums.size(); j++) {
        sum += nums[j];           // expand window

        while (sum > k) {         // shrink when invalid
            sum -= nums[i];
            i++;
        }

        if (sum == k) {
            maxLen = max(maxLen, j - i + 1);
        }
    }
    return maxLen;
};
};
int main() {
    Solution sol;
    vector<int> nums = {1, -1, 5, -2, 3};
    int k = 3;
    int result = sol.longestSubarrayWithSumK(nums, k);
    cout << "Length of the longest subarray with sum " << k << " is: " << result << endl;
    return 0;
}