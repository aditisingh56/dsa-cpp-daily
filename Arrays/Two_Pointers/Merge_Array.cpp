// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

//LeetCode Question Number-88
#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j =n-1;
        int k=(m+n)-1;
        while(i>=0 && j>=0){
          if(nums2[j]>nums1[i] ){
            nums1[k] = nums2[j];
            j--;
          }
          else{
              nums1[k] = nums1[i];
            i--;
          }
          k--;
        }
        while( j>=0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};
int main(){
    Solution sol;
    vector<int> nums1 = { 1, 2, 3, 0, 0 ,0};
    int m=3;
     vector<int> nums2 = { 2, 7, 9};
     int n = 3;
     sol.merge( nums1 , m, nums2, n  );
     cout<<"Merged Array: ";
     for (int i: nums1 ){
        cout<< i<<" ";
     }
     cout<<endl;
}