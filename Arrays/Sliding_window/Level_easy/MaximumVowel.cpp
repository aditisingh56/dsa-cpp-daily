// Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

// Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

// LeetCode Question number-1456

// Sliding Window
#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char>vowel={'a' , 'e', 'i' , 'o', 'u'};
        int current_count =0;
        int maximum_vowel = 0;
        for(int i=0 ; i<k;i++){
            if(vowel.count(s[i]))
                current_count++;
        }
        maximum_vowel = current_count;
        for(int i=k ; i<s.length();i++){
            if(vowel.count(s[i]))
                current_count++;
            if(vowel.count(s[i-k]))
                current_count--;
            maximum_vowel= max( current_count ,  maximum_vowel);
            if(maximum_vowel == k){
                return k;
            }

        }
        return maximum_vowel;
    }
};
int main()
{
    Solution solution;
    string s = "abciiidef";
    int k = 3;
    cout << "Maximum number of vowels in any substring of length " << k << " is: " << solution.maxVowels(s, k) << endl;
    
    return 0;
}