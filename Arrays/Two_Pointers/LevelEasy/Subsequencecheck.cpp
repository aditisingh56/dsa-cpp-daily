// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).//

//Leetcode Question Number: 392
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        while( i<s.size() && j<t.size() ){
            if( s[i] == t[j]){
                i++;

            }
            j++;
        }
        if( i==s.size()) return true;
        else{
            return false;
        }
    }
};
int main(){
    Solution sol;
    string s = "abc";
    string t = "jdakbklc";
    cout << std::boolalpha;
    cout << "Checking if s is subsequence of t: " << sol.isSubsequence(s, t) << endl;
    
}