#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
// 594. Longest Harmonious Subsequence.
//We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.
//Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.
// subsequence of array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.
 //when subsequence is asked w eknow that we can skip elements but the order must be maintained.
 // so sliding window will not bw used here.
 
using namespace std;
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        for( int value : nums){
            mp[value]++;
        }
        int ans= 0;
        for( auto &it : mp){
            int x = it.first;
                if( mp.count(x+1) ){
                    ans = max(ans, mp[x] +mp[x+1]); // we dont explicitly amkle pairs of x and x+1, but mentally we are finding the frequency of x and x+1 whichever pair of this x, x+1 is more we take taht as answer. 
                }
        }
       return ans;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1,3,2,2,5,2,3,7};
    int result = sol.findLHS(nums);
    cout<<"The length of the longest harmonious subsequence is: "<<result<<endl;
    return 0;
}