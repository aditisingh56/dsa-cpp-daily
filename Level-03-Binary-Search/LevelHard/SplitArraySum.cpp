// Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

// Return the minimized largest sum of the split.

// A subarray is a contiguous part of the array.
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
class Solution {
public:
   bool isValid(int mid ,int k, vector<int> &nums){
    int count = 1, currentSum = 0;
    for(int i=0;i<nums.size();i++){
        currentSum +=nums[i];
        if(currentSum >mid){
            count++;
            currentSum = nums[i];
            if(count>k) return false;
        }
    }
    return true;
   }

    
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if( k >n) return -1;
        
          int ans=-1;
          int lower = *max_element(nums.begin(),nums.end());
            int higher = accumulate(nums.begin(), nums.end(), 0);
        
            while(lower<=higher){
                int mid = lower + (higher-lower)/2 ;

                if(isValid(mid , k ,nums)){
                    ans = mid;
                    higher= mid-1;
                }else{
                    lower = mid+1;
                }
            }
            return ans;
         }
         

    
};
int main(){
    Solution sol;
    vector<int> nums = {7, 2, 5, 10, 8};
    int k = 2;
    int result = sol.splitArray(nums, k);
    cout << "Result: " << result << endl;
    return 0;
}