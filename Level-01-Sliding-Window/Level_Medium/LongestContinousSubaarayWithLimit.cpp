// 1438. Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit.
// This is a variable size kinda question this means that the window size is not given.
#include <iostream>
#include <vector>
#include <deque>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i =0;
        deque<int>maxDeque , minDeque;
        int maxLen=0;
        for(int j=0;j<nums.size();j++){
            while(!maxDeque.empty() && nums[j]>maxDeque.back()){
                maxDeque.pop_back();
            }
            maxDeque.push_back(nums[j]);
            while(!minDeque.empty() && nums[j]<minDeque.back()){
                minDeque.pop_back();
            }
            minDeque.push_back(nums[j]);
        // now we have to check if the window is valid .
        // this condition says that if the difference between the maximum and minimum element is greater than limit then we have to shrink the window from the start, when window becomes invalid.
        while(maxDeque.front() - minDeque.front() >limit){
            if(maxDeque.front() == nums[i] ) maxDeque.pop_front();
            if(minDeque.front() == nums[i] ) minDeque.pop_front();
             i++;
        }
       
        
        maxLen = max(maxLen , j-i+1);
        }
        return maxLen;
    }
    
};
int main() {
    Solution solution;
    vector<int> nums = {8, 2, 4, 7};
    int limit = 4;
    int result = solution.longestSubarray(nums, limit);
    cout << "Length of the longest subarray with absolute difference <= " << limit << ": " << result << endl;
    return 0;
}