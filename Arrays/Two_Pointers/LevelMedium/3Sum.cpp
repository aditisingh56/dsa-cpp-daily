// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.//

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       vector<vector<int>>result;
       for(int i = 0;i<nums.size();i++){
         if( i>0 && nums[i]==nums[i-1])
            continue;

         int left = i+1;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
         int right=nums.size()-1;
         

         while(left<right){
            int sum =nums[i] + nums[left] + nums[right];
            if(sum > 0){
                right--;
            }
            else if(sum< 0){
                left++;
            }
            else{
                result.push_back({nums[i] , nums[left], nums[right]});
                int currentLeft = nums[left];
                int currentRight = nums[right];

                while(left<right && nums[left] == currentLeft) left++;
                while(left<right && nums[right]== currentRight) right--;
            }
         }
       } 
       return result;
    }
};
int main(){
    Solution sol;
       vector<int> nums = {1, 0, -1, 2, 4, 0, -1, 1};
    vector<vector<int>> output = sol.threeSum(nums);

    cout << "Triplets are:\n";
    for (auto triplet : output) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}