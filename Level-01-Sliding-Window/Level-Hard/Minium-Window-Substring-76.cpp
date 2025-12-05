// Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

// The testcases will be generated such that the answer is unique.

// Note that the order of output does not matter.

 

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
string minWindow(string s, string t) {
    unordered_map<char, int> need, window;
    for (char c : t) need[c]++;
    int required = need.size();

    int have = 0, left = 0;
    int minLen = INT_MAX, startIdx = 0;

    for (int right = 0; right < s.size(); ++right) {
        char ch = s[right];
        if (need.count(ch)) {
            window[ch]++;
            if (window[ch] == need[ch]) {
                have++;
            }
        }

        while (have == required) {
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                startIdx = left;
            }

            char popChar = s[left];
            if (need.count(popChar)) {
                window[popChar]--;
                if (window[popChar] < need[popChar]) {
                    have--;
                }
            }
            left++;
        }
    }

    return (minLen == INT_MAX) ? "" : s.substr(startIdx, minLen);
}
int main(){
    string s = "ADOBECODEBANC";
    string t = "ABC";
    string result = minWindow(s, t);
    cout << "Minimum window substring: " << result << endl;
    return 0;
}
