// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of s2//

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
bool isFreqSame(int freq1[26], int freq2[26]){
    for(int i=0;i<26;i++){
    if(freq1[i] != freq2[i]) 
    return false;
    }

return true;
}

    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
         int n2 = s2.length();
        
        if(n1>n2)
            return false;
        
        int freq1[26]  = {0};
        for( char ch : s1){
            freq1[ch -'a']++;
        }
         int freq2[26] = {0};
         for ( int i=0; i<n1; i++){
            freq2[s2[i] - 'a']++;
         }
         if (isFreqSame(freq1 , freq2))return true;

         for(int i= n1; i<n2;i++){
            freq2[s2[i-n1]-'a']--;
            freq2[s2[i]-'a']++;

            if(isFreqSame(freq1 , freq2))return true;
        
         }
         return false;
    }
};
int main() {
    Solution solution;
    string s1 = "ab";
    string s2 = "eidbaooo";
    
    if (solution.checkInclusion(s1, s2)) {
        cout << "s2 contains a permutation of s1." << endl;
    } else {
        cout << "s2 does not contain a permutation of s1." << endl;
    }
    
    return 0;
}