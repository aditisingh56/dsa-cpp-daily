// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if( t.size() != s.size() ) return false;
        int freq[26] = {0};
        for(char ch : s){
            freq[ch-'a']++;
        }
        for(char ch : t){
            freq[ch-'a']--;
        }
        for(int i =0; i<26;i++){
            if(freq[i] != 0) return false;
        }
        return true;
    }
};
int main(){
    Solution sol;
    string s = "anagram";
    string t = "nagaram";
    bool result = sol.isAnagram(s, t);
    cout << (result ? "true" : "false") << endl; // Output: true
    return 0;
}