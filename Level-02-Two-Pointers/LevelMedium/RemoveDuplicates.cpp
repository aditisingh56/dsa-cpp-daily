// Given an integer array nums sorted in non-decreasing order, remove some duplicates in-place such that each unique element appears at most twice. The relative order of the elements should be kept the same.

// Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

// Return k after placing the final result in the first k slots of nums.

// Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.//

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        for(int j=0; j<nums.size();j++){
            if(i<2){
                nums[i] = nums[j];
                i++;
            }
            else if( nums[j] != nums[i-2]){
                nums[i] = nums[j];
                i++;
            }
            else{
                continue;
            }
        }
        return i;
    }
};
int main(){
    Solution sol;
    vector<int> nums ={0, 0 , 0, 1 ,1 , 1, 1, 2 ,2 ,4 ,6 ,6 ,6 };
    
    int k = sol.removeDuplicates(nums);
    cout << "After removing extra duplicates (each max twice): ";
    for(int idx = 0; idx < k; idx++){
        cout << nums[idx] << " ";
    }
    cout << "\nNew length is: " << k << endl;
}
