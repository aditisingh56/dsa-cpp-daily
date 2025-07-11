// competitive_sliding_window.hpp
// A mini "Competitive Toolbox" header focused on common Sliding Window patterns.
// Drop this file into your C++‑Projects folder (e.g. C++‑Projects/competitive_sliding_window.hpp)
// and `#include` it whenever you need fast helpers during contests.

#ifndef COMPETITIVE_SLIDING_WINDOW_HPP
#define COMPETITIVE_SLIDING_WINDOW_HPP

#include <bits/stdc++.h>
using namespace std;

/* 
   1. Longest substring without repeating characters (O(n))
   */
inline int longestUniqueSubstring(const string &s) {
    vector<int> last(256, -1);   // last seen index for each ASCII char
    int best = 0, start = 0;     // window [start … j]
    for (int j = 0; j < (int)s.size(); ++j) {
        if (last[s[j]] >= start)       // char repeats inside window
            start = last[s[j]] + 1;    // move left edge past previous occ.
        last[s[j]] = j;                // update last seen position
        best = max(best, j - start + 1);
    }
    return best;
}

/* 
   2. Maximum Erasure Value – max sum of subarray with unique elems (O(n))
 */
inline long long maxUniqueSubarraySum(const vector<int> &nums) {
    unordered_set<int> seen;
    long long curr = 0, best = 0;
    size_t i = 0;
    for (size_t j = 0; j < nums.size(); ++j) {
        while (seen.count(nums[j])) {  // duplicate – shrink from left
            seen.erase(nums[i]);
            curr -= nums[i];
            ++i;
        }
        seen.insert(nums[j]);
        curr += nums[j];
        best = max(best, curr);
    }
    return best;
}

/*
   3. First negative integer in every window of size k (O(n))
   Returns a vector where each entry is either the first negative number
   in that window or 0 if none exists.
*/

inline vector<int> firstNegativeInWindow(const vector<int> &arr, int k) {
    deque<int> dq;               // stores indices of negative numbers
    vector<int> res;
    for (int j = 0; j < (int)arr.size(); ++j) {
        if (arr[j] < 0) dq.push_back(j);   // record negatives

        // form a window when j >= k - 1
        if (j >= k - 1) {
            // purge indices that slid out of window
            while (!dq.empty() && dq.front() <= j - k)
                dq.pop_front();
            // record answer for this window
            res.push_back(dq.empty() ? 0 : arr[dq.front()]);
        }
    }
    return res;
}

#endif // COMPETITIVE_SLIDING_WINDOW_HPP
