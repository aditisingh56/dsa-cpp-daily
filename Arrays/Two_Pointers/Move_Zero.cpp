// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements. //
//LetCodeQuestion number 283
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]!=0){
                nums[i] = nums[j];
                i++;
            }
        }
            while(i<nums.size()){
                nums[i]=0;
                i++;
            }
        
        
    }
};
int main(){
    Solution sol;
    vector<int> nums={ 1, 4, 0, 76 , 0, 5, 34, 0 , 0, 5};
    sol.moveZeroes(nums);
    cout<<"Array after placing all 0's at once: ";
    for(int num:nums){
      cout<<num<<" ";
    }
    cout<<endl;
}