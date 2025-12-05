// 2958. Length of Longest Subarray With at Most K Frequency

// You are given an integer array nums and an integer k.

// The frequency of an element x is the number of times it occurs in an array.

// An array is called good if the frequency of each element in this array is less than or equal to k.

// Return the length of the longest good subarray of nums.

// A subarray is a contiguous non-empty sequence of elements within an array
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        int  i =0 , count =0 , maxLen =0;
        for(int j=0;j<nums.size();j++){
            freq[nums[j]]++;
            while(freq[nums[j]]>k){
                freq[nums[i]]--;
                i++;
            }
            maxLen = max(maxLen , j-i+1);
        }
        return maxLen;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,2,1,2,3};
    int k = 2;
    cout << s.maxSubarrayLength(nums, k) << endl;
    return 0;
}