// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

// Leetcode Question Number:977
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left =0;
        int right = nums.size()-1;
        vector<int> result(nums.size());
        int position = result.size()-1;

        while(left<=right){
           if(abs(nums[left]) > abs(nums[right])){
              result[position] = nums[left] * nums[left];
              left++;
           }
           
           else{
             result[position] = nums[right] * nums[right];
             right--;

           }
           position--;
           
        }
    return result;
    }
}; 
int main(){
    Solution sol;
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> output = sol.sortedSquares(nums);
    for(int i : output){
        cout<< i <<" ";
    }
    cout<<endl;

}