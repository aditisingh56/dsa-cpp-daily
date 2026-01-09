//This question was in premium of leetcode, i found this in Aditya verma sliding window series. 
// this is very easy kinda question and it will help you understand how variable size window works.

#include<unordered_map>
#include<vector>
using namespace std;

int lengthOfLongestSubstringKDistinct(string  &s , int k){
    unordered_map<char , int> count;
    int i=0, maxLength = 0;
    for(int j =0;j<s.length();j++){
        count[s[j]]++; // while i was writting I realsied, I'm not writing map[s[]] to increment, i was goin to do map([s[j]]), keep this in mind
        while( s.length() >k){
            count[s[i]]--;
            if (count[s[i]] == 0){
                count.erase(s[i]);
            }
            i++;
        }
        maxLength = max( maxLength , j-i+1);
        
    }
    return maxLength;
    

}
