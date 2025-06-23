// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.//
// Leetcode question number 26
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()){
            return 0;
        }
        int i = 0;
        for(int j = 1; j<nums.size(); j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};
int main(){
    Solution sol;
    vector<int> nums={1,1,2};
    int k = sol.removeDuplicates(nums);
    cout << "Unique elements of array:" << endl;
    for(int i = 0; i < k; ++i){
        cout << nums[i] << endl;
    }
}