// ### Problem Statement
// <!-- You are given an integer array nums consisting of n elements, and an integer k.

// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted. -->

// <!-- LeetCode Question Number-643 -->
// ### Solution
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum =0;
        double Average_value;
        for(int i = 0; i < k; i++) {
            sum += nums[i];
            Average_value = sum / (double)k;
        }
         double max_value = Average_value;
        for(int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];
            Average_value = sum / (double)k;
            max_value = max(max_value, Average_value);
    }
    return max_value;
}
};
int main()
{
    Solution sol;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    double result = sol.findMaxAverage(nums, k);
    cout << "Maximum average subarray of length " << k << " is: " << result << endl;
    return 0;
}
