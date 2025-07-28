#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minSum = 0, sum = 0;

        for (int num : nums) {
            sum += num;
            minSum = min(minSum, sum);
        }

       
        return 1 - minSum;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-3, 2, -3, 4, 2};

    cout << "Minimum start value: " << solution.minStartValue(nums) << endl;
    return 0;
}
