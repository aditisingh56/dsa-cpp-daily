#include <bits/stdc++.h>
using namespace std;

// Function to check if we can paint all boards within given maxTime using k painters
bool isPossible(vector<int> &boards, int k, int maxTime) {
    int painters = 1;      // start with 1 painter
    int timeSum = 0;       // current painter's total time

    for (int length : boards) {
        if (length > maxTime) return false; // Single board exceeds allowed time

        if (timeSum + length <= maxTime) {
            timeSum += length;  // add this board to current painter
        } else {
            painters++;         // assign to new painter
            timeSum = length;   // start counting for new painter
            if (painters > k) return false; // too many painters needed
        }
    }
    return true;
}

// Main function to find minimum time
int paintersPartition(vector<int> &boards, int k) {
    int low = *max_element(boards.begin(), boards.end()); // min possible (largest single board)
    int high = accumulate(boards.begin(), boards.end(), 0); // max possible (1 painter paints all)
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(boards, k, mid)) {
            ans = mid;     // try to minimize
            high = mid - 1;
        } else {
            low = mid + 1; // need more time
        }
    }
    return ans;
}

int main() {
    vector<int> boards = {10, 20, 30, 40}; // board lengths
    int k = 2; // painters

    cout << "Minimum time required: " << paintersPartition(boards, k) << endl;
    return 0;
}
