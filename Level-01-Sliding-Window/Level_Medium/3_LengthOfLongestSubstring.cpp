// i have already solved this quetsion using set, in te same foler
// this is another aproach for the same problem 
// in this method wwew are usinhg map, there we used set to solve this problem. using set is the optiomal aoproach.

//Leetcode question  number-3

#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
    public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int > map;
        int i =0, maxLength = 0;
        for (int j =0;j<s.length();j++){
             map[s[j]]++;
            while(map.size() > j-i+1 ){
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
// here, in this, what we do is. we are creating a map.  as you know the size of the map are number of keys, that is it stores like a:2, b:1 like this, so whatever is the value of the key
// that is the unique value that is the size of the map, right?  and you alo know that size of the window is j-i+1 right? so, we need all the characters in the window to be unique. and that is only possiblke 
// when the number of elemnts, that is size of the window is equal to to the size of the map, because size of the map is number of unique characters. so when size of the map is less than size of the window, that means there are duplicate characters.
int main(){
    Solution sol;
    string s = "abcabcbb";
    int result = sol.lengthOfLongestSubstring(s);
    cout << result << endl;
    return 0;
}