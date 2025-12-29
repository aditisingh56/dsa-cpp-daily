#include <iostream>
#include <deque>
#include<vector>
using namespace std;

vector<int> MaximumOfCurrentWindow(int arr[], int n, int k) {
    vector<int> result;
    deque<int> dq; // to store indexes of useful elements in current window
    int i = 0;
    int j = 0;
    while (j < n) {
        // remove elements smaller than the current element from the back of the deque
        while (!dq.empty() && arr[dq.back()] <= arr[j]) {
            dq.pop_back();
        }
        dq.push_back(j); // add current element at the back of the deque
        // check if we have hit the window size
        if(dq.front() < i){
            dq.pop_front();
        }
        if ((j - i + 1) < k) {
            j++;
        } else {
            // the front of the deque is the largest element of the previous window
            result.push_back(arr[dq.front()]);
            // remove the elements which are out of this window
           
            // slide the window
            i++;
            j++;
        }
    }
    return result;
};
int main(){
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vector<int> result = MaximumOfCurrentWindow(arr, n, k);
    cout << "Maximum of each window of size " << k << " are: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}