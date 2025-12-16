// this is a easy level leetcoe 136th problem
#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num; // XOR operation
        }
        return result;
    }
};
int main() {
    Solution sol;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int singleNum = sol.singleNumber(nums);
    cout << "The single number is: " << singleNum << endl;
    return 0;
}