//540. Single Element in a Sorted Array

//You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n ==1) return nums[0];
         int start =0 ,end = n-1;
         while(start<=end){
            int mid = start + (end- start)/2;

            //edge cases
            if(mid ==0 && nums[0] != nums[1]) return nums[mid];
            if(mid == n-1 && nums[n-1] != nums[n-2]) return nums[mid];

            // now if mid was ans
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) return nums[mid];

            // if mid is odd( at an odd index) - it means right and left odd terms if not even terms
            if(mid%2==0){
                if(nums[mid] == nums[mid-1]) end = mid-1;
                else{
                    start = mid+1;
                }
            }
            else{
                if(nums[mid] == nums[mid-1]) start =mid+1;
                else{
                    end =mid-1;
                }
            }
            
         }
         return -1; 
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int result = sol.singleNonDuplicate(nums);
    cout << "Single element: " << result << endl; // Output: 2
    return 0;
}