
// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
// LeetCode Question number-1004

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, maxLen = 0;
        int zeroCount = 0;

        for (int j = 0; j < nums.size(); j++) {

            if (nums[j] == 0) {
                zeroCount++;
            }

  
            while (zeroCount > k) {
                if (nums[i] == 0) {
                    zeroCount--;
                }
                i++;
            }

         
            maxLen = max(maxLen, j - i + 1);
        }

        return maxLen;
    }
};
int main(){
    Solution solution;
    vector<int> nums = {1, 1, 0, 0, 1, 1, 1, 0, 1};
    int k = 2;
    int result = solution.longestOnes(nums, k);
    cout << "Maximum number of consecutive 1's after flipping at most " << k << " zeros: " << result << endl;
    return 0;
}
