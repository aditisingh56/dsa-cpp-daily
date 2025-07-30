// 33. Search in Rotated Sorted Array
// You are given an integer array nums sorted in ascending order, and an integer target.
// Suppose that nums is rotated at some pivot unknown to you beforehand (i.e., [0, 1, 2, 4, 5, 6, 7] might become [4, 5, 6, 7, 0, 1, 2]).
// If target is found in the array return its index, otherwise, return -1.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(target == nums[mid]) return mid;

            if(nums[start]<=nums[mid]) {
                if(nums[start] <= target && target  <= nums[mid]) end = mid-1;
                else{
                    start = mid +1;
                }
            }
            else {
                if(nums[mid] <= target && target <= nums[end]) start = mid+1;
                else{
                    end= mid-1;
                }

            }
                
        }
        return -1;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;
    int result = sol.search(nums, target);
    cout << "Index of target " << target << ": " << result << endl; // Output: 4
    return 0;
}