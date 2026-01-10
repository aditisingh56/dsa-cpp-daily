#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

// unique -set 
//replace- maps
// max/min - heaps/ priority queue
// count/frequency - hash map/ unordered map
// 424. Longest Repeating Character 

class Solution {
public:
    int characterReplacement(string s, int k) {
        int i =0, maxLength =0, maxFreq=0;
        unordered_map<char, int> map;
        for(int j =0; j<s.length();j++){
          map[s[j]]++;
          maxFreq = max(maxFreq , map[s[j]]); // this is something new, like noty nmew-mnew, but how you can find the max key, this is the wayy , will be used in future questions so keep i nmind.;

          while( j-i+1-maxFreq >k){
            map[s[i]]--;
            if(map[s[i]] == 0){
                map.erase(s[i]);
            }
            i++;
          }
          maxLength = max(maxLength , j-i+1);
        }
        return maxLength;
    }
};
int main(){
    Solution sol;
    string s = "AABABBA";
    int k =1;
    int result = sol.characterReplacement(s , k);
    cout<<"The length of the longest substring after replacement is: "<<result<<endl;
};