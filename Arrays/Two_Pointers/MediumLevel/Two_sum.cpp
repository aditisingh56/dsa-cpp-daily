// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 
// LeetCode Problem Number-167
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0;
        int end=numbers.size()-1;
        
        while(start<end){
             int sum=numbers[start]+numbers[end];
          if(sum == target){
            return { start+1, end+1 };
          }
          else if(sum > target){
            end--;
          }
          else{
            start++;
          }
          
        }
        return {};
        
    }
};
int main(){
 Solution sol;
 
vector<int> numbers={2,7,11,15};
int target = 9;
vector<int> result = sol.twoSum(numbers, target);
cout << "The index to get the target value are: ";
for (int idx : result) {
    cout << idx << " ";
}
cout << endl;
}