// Given a string s, find the length of the longest substring without duplicate characters.//

// LeetCode Question number-3

#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
       int  maxsub = 0;
        int i = 0;
        for (int j= 0;j<s.length(); j++){
            while(seen.find(s[j]) != seen.end()){
                seen.erase(s[i]);
                i++;
            }
            seen.insert(s[j]);
            maxsub = max(maxsub , j-i+1);
        }
        return maxsub;
    }
};
int main(){
    Solution sol;
    string s = "abcabcbb";
    int result = sol.lengthOfLongestSubstring(s);
    cout << result << endl;
    return 0;
}