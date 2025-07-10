#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int i = 0, maxLen = 0;
        for (int j = 0; j < nums.size(); j++) {
            int mini = nums[j], maxi = nums[j];

    for (int k = i; k <= j; k++) {
        mini = min(mini, nums[k]);
        maxi = max(maxi, nums[k]);
    }

    if (maxi - mini <= limit) {
        maxLen = max(maxLen, j - i + 1);
    } else {
        i++; // shrink window
        j--; // retry from next i (because j was invalid)
    }
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