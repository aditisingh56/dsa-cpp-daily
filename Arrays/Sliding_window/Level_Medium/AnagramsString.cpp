// Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.//

// LeetCode Question number-438

#include<iostream>
#include<vector>
#include<string>
using namespace std;
 class Solution {
public:
    bool isFreqSame( int freq1[26],int freq2[26] ){
        for (int i =0; i< 26;i++){
            if(freq1[i] != freq2[i] ){
                return false;
            }
           
        } return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int freq1[26] = {0};
        vector<int> result;
        if(s.size()<p.size()) return{};
        for(char ch : p){
             freq1[ch -'a']++;
        }
         int freq2[26] = {0};
         for (int i = 0; i< p.size(); i++){
            freq2[s[i]-'a']++;
         }
         
         if(isFreqSame(freq1 , freq2)){
            result.push_back(0);
         }
         for(int i= p.size(); i <s.length(); i++){
            freq2[s[i-p.size()]-'a']--;
            freq2[s[i]-'a']++;
              if(isFreqSame(freq1 , freq2)){
            result.push_back(i-p.size()+1);
         }
         }
        
         return result;
    }
};      
int main(){
    Solution sol;
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> result = sol.findAnagrams(s, p);
    for(int index : result){
        cout << index << " ";
    }
    return 0;
}                                                                                