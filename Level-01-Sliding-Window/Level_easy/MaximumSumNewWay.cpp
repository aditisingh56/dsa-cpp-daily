// This is a two pointers appproach in sliding window for fixed k

#include <vector>
#include <iostream>
using namespace std;
int maxSumSubarrayOfSizeK(vector<int>& arr, int k) {
    int i = 0, j = 0;              // two pointers
    int sum = 0, maxSum = INT_MIN;

    while (j < arr.size()) {
        sum += arr[j];            // include arr[j] in the current window

        if (j - i + 1 < k) {
            j++;                  // expand window till size k
        }
        else if (j - i + 1 == k) {
            maxSum = max(maxSum, sum);  // process the current window

            sum -= arr[i];        // remove the leftmost element
            i++; j++;             // slide the window
        }
    }

    return maxSum;
}
int main(){
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    cout << "Maximum sum of subarray of size " << k << " is: " << maxSumSubarrayOfSizeK(arr, k) << endl;
    return 0;
}