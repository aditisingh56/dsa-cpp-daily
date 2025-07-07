// Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.//

// LeetCode Question number-209


#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum =0 , minLen = INT_MAX , i=0 ;
        int n=nums.size();
        for( int j=0; j<n; j++){
            sum += nums[j];
            while(sum >= target){
                minLen = min(minLen , j-i+1);
                sum -=nums[i];
                i++;
            }
        }
        if(minLen == INT_MAX){
            return 0;
        }
        return minLen;
    }
};
int main{
    Solution sol;
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    int result = sol.minSubArrayLen(target, nums);
    cout << "Minimal length of a subarray whose sum is greater than or equal to target: " << result << endl;
    return 0;
}