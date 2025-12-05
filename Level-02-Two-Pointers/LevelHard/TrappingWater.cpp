// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

//LeetCode Question number-42

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>leftmax(n, 0);
         vector<int>rightmax(n, 0);
         
         leftmax[0] = height[0];
         rightmax[n-1] = height[n-1];

         for(int i=1; i<n; i++){
            leftmax[i] = max(leftmax[i-1], height[i]);
         }
          for(int i=n-2; i>=0; i--){
            rightmax[i] = max(rightmax[i+1], height[i]);
         }
         int ans =0;
         for(int i=0;i<n;i++){
            ans+= (min(leftmax[i], rightmax[i])-height[i]);
         }
    return ans;
    }
};
int main() {
    Solution solution;
    vector<int> height = {3, 45, 3, 2, 5, 7, 3, 9, 8};
    cout << "Amount of water trapped is: " << solution.trap(height) << endl;
    
    return 0;
}