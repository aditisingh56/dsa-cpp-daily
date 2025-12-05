// 1493. Longest Subarray of 1's After Deleting One Element

// Given a binary array nums, you should delete one element from it.

// Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.

// Example 1:
// Input: nums = [1,1,0,1]
// Output: 3
// Explanation: After deleting the 0, the longest subarray of 1's is [1,1,1].

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i =0 , zeroCount = 0;
        int maxLen = 0;
        for(int j =0; j<nums.size() ; j++){
            if(nums[j] == 0) zeroCount++;

            while(zeroCount > 1){
                if(nums[i] == 0){
                    zeroCount--;
                }i++;

            }
            maxLen = max(maxLen , j-i);
        }
        return maxLen;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1,1,0,1};
    cout << sol.longestSubarray(nums) << endl;
    return 0;
}