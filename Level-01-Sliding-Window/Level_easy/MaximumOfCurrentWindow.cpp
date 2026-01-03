#include <iostream>
#include <deque>
#include<vector>
using namespace std;

vector<int> MaximumOfCurrentWindow(int arr[], int n, int k) {
    vector<int> result;
    deque<int> dq; // to store indexes of useful elements in current window
    // dequeu specifically we selected because it allows us to push and pop from both front and back in O(1) time but queue allows us to do this only from one side.
    int i = 0;
    int j = 0;
    while (j < n) {
        // remove elements smaller than the current element from the back of the deque
        while (!dq.empty() && arr[dq.back()] <= arr[j]) {
            dq.pop_back();
        }
        dq.push_back(j); // here we are adding the index of the element not the element itself and according to that only, we are pooping
        
        // check if we have hit the window size
        if(dq.front() < i){ // because we are storing tjhe indexes not thje values, so if thers any index that crosses the limit that we remove it. we only remove it if it is ans , of not 
            // there is no need go remobe it as it will not change anthing in the ans.
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