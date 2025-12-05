// You are given an array of positive integers nums and want to erase a subarray containing unique elements. The score you get by erasing the subarray is equal to the sum of its elements.

// Return the maximum score you can get by erasing exactly one subarray.

// An array b is called to be a subarray of a if it forms a contiguous subsequence of a, that is, if it is equal to a[l],a[l+1],...,a[r] for some (l,r).//

// LeetCode Question number-1695
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>seen;
        int start = 0, end = 0, sum =0, maximum = 0;

        while(end<nums.size()){
            if(seen.find(nums[end]) == seen.end()){
                sum+= nums[end];
                maximum = max(sum , maximum);
                seen.insert(nums[end]);
                end++;
            }
            else{
                sum -= nums[start];
                seen.erase(nums[start]);
                start++;
            }

        }
        return maximum;
    }
};
int main(){
    Solution s;
    vector<int> nums = {4, 2, 4, 5, 6};
    int result = s.maximumUniqueSubarray(nums);
    cout << "Maximum Erasure Value: " << result << endl;
    return 0;
}