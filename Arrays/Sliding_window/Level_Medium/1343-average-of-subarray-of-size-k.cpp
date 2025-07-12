// 1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
// Given an array of integers arr and two integers k and threshold, return the number of sub-arrays of size k and average greater than or equal to threshold.

//  Example 1:

// Input: arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
// Output: 3
// Explanation: Sub-arrays [2,5,5],[5,5,5] and [5,5,8] have averages 4, 5 and 6 respectively. All other sub-arrays of size 3 have averages less than 4 (the threshold).//

//My Solution
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count =0,  sum =0, target=threshold*k;
        for(int i=0; i<k;i++){
            sum+=arr[i];
        }
        if(sum>=target)count++;
        for(int i =k;i<arr.size();i++){
            sum +=arr[i] - arr[i-k];
             if(sum>=target)count++;
            
        }
        return count;
    }
};
int main() {
    Solution solution;
    vector<int> arr = {2, 2, 2, 2, 5, 5, 5, 8};
    int k = 3;
    int threshold = 4;
    int result = solution.numOfSubarrays(arr, k, threshold);
    cout << "Number of sub-arrays of size " << k << " with average >= " << threshold << ": " << result << endl;
    return 0;

};