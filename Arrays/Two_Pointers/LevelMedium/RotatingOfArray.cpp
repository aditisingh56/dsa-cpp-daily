// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
// Return the rotated array.
// LeetCode Question number-189

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

          
    }
};
int main () {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    solution.rotate(nums, k);

    cout << "Rotated array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}