// PeakIndexInAMountainArray.cpp - question number 852

// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

// Return the index of the peak element.

// Your task is to solve it in O(log(n)) time complexity.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 1, end = n-2;
        while(start <= end){
            int mid = start + (end-start)/2;
            if( arr[mid] > arr[mid+1] && arr[mid]> arr[mid-1] ) return mid;
            
            if( arr[mid-1]<arr[mid]){
                start = mid+1;
            }
            else{
                end= mid-1;
            }

        }
        return -1;
    }
};
int main() {
    Solution sol;
    vector<int> arr = {0, 2, 1, 0};
    int peakIndex = sol.peakIndexInMountainArray(arr);
    cout << "Peak index: " << peakIndex << endl; // Output: 1
    return 0;
}