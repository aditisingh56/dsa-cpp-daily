#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class FirstNegativeInWindow {
    public:
    vector<int> firstNegativeInWindow(int arr[], int n, int k) {
        vector<int> result;
        queue<int> q; // to store indexes of negative numbers
        // process the first window of size k
        int i=0;
        int j=0;
        while(j<n){
            // add the index of negative number to the queue
            if(arr[j] < 0){
                q.push(j);
            }
            // check if we have hit the window size
            if((j - i + 1) < k){
                j++;
            }
            
            else {
                if (!q.empty()) {
                    result.push_back(arr[q.front()]);
                } else {
                    result.push_back(0);   // no negative number in the window
                }
                    // if the index at the front is out of the window, remove it
                if(!q.empty() && q.front() == i) {// if the index at the front of the queue is equal to the start of the window
                        q.pop();}
                   
                           
                // slide the window
                i++;
                j++;

            }
        }
        return result;
    }
};
int main(){
    FirstNegativeInWindow fnw;
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vector<int> result = fnw.firstNegativeInWindow(arr, n, k); // our method is returning value in vector which is why we have to create a vector to store it and because it ahs more than one value we used a for loop.
    cout << "First negative numbers in each window of size " << k << " are: ";
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
};