//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

//Leetcode 75

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int mid = 0 , low = 0 , high = n-1;
        while(mid<= high){
            if(nums[mid] == 0){
                swap(nums[low] , nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1) mid++;
            else{
                swap(nums[mid] , nums[high]);
                high--;
            }

        }
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sol.sortColors(nums);
    for (int num : nums) cout << num << " ";
    return 0;
}