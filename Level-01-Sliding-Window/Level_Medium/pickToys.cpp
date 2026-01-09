// This question i found from aditya verma series, i did not find it on leetcode , it was in premium 
// it says theres on ebiy, who is in toy shop and ask's his mother for toys
// his other says , ypou can buy tooys of only 2 types , continusly in one row.// you can not have more than two type sin ypur cart at once. like this longest/largets one 
// Leetcode Question number - 159. Longest Substring with At Most Two Distinct Characters
// very easy probelm, just ientification that it belongs to this is the keyu.
#include <iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
    public:
    int PickMax2Toys( string s ,int  k){ 
    // here k is two, that is in built
    int i=0;
    int maxLength = 0;
    unordered_map<char, int> map;
    for (int j =0;j<s.length();j++){
    map[s[j]]++;
    while( map.size()> k){
        map[s[i]]--;
        if(map[s[i]] == 0){
            map.erase(s[i]);
        }
        i++;
        
    }
    maxLength = max( maxLength , j-i+1);
    }
    return maxLength;
    }
};
int main (){
    Solution sol;
    string s = "abcbbbbcccbdddadacb";
    int k = 2; // as we have to pick toys of only 2 types
    int result = sol.PickMax2Toys(s , k);
    cout<<"The maximum number of toys that can be picked is: "<<result<<endl;
    return 0;
};
    
