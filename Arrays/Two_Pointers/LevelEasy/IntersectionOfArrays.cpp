// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

// LeetCode Question Number 350
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> results;

        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] == nums2[j]){
                 results.push_back(nums1[i]);
                 i++;
                 j++;
            }
            else if( nums1[i] > nums2[j]){
                j++;
            }
            else{
                i++;
            }
            
        }
        return results;
    }
};
int main(){
    Solution sol;
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = { 2, 2};
    vector <int> output= sol.intersect(nums1 , nums2);
    cout<<"Interesected Array:";
    for(int i : output){
        cout<< i <<" ";

    }
cout<<endl;
}