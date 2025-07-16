// Given an integer array nums, handle multiple queries of the following type:

// Calculate the sum of the elements of nums between indices left and right inclusive where left <= right.
// Implement the NumArray class:

// NumArray(int[] nums) Initializes the object with the integer array nums.
// int sumRange(int left, int right) Returns the sum of the elements of nums between indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + nums[right]).//
#include<iostream>
#include<vector>
using namespace std;

class NumArray {
private:
    vector<int> prefix; // stores prefix sums

public:
    // Constructor
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n);
        prefix[0] = nums[0];

        for (int i = 1; i < n; ++i) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
    }

    // Return sum between left and right indices (inclusive)
    int sumRange(int left, int right) {
        if (left == 0) return prefix[right];
        return prefix[right] - prefix[left - 1];
    }
};

int main() {
    vector<int> nums = {2, 4, 1, 3, 7};  
    NumArray obj(nums);                 

    // Test cases
    cout << "Sum from 1 to 3: " << obj.sumRange(1, 3) << endl;  
    cout << "Sum from 0 to 4: " << obj.sumRange(0, 4) << endl;  
    cout << "Sum from 2 to 2: " << obj.sumRange(2, 2) << endl; 

    return 0;
}
