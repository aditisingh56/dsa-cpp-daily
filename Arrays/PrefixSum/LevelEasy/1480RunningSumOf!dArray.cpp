// Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

// Return the running sum of nums//

#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n =nums.size();
        vector<int> runningSum(n);
        runningSum[0] = nums[0];
        for(int i=1;i<n;i++ ){
            runningSum[i] =  nums[i]+runningSum[i-1] ;
        }
        return runningSum;

    }
};
int main(){
    Solution solution;
    vector<int> nums = {1,2,3,4};
    vector<int> result = solution.runningSum(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
        }

}