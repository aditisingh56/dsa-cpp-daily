#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;


class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map< char, int> need_map , window;

        for( char c : t){
            need_map[c]++;
        }
        int i =0, minLength = INT_MAX;
        int required = need_map.size();
        int formered = 0;
        int start =0;

        for(int j =0; j<s.length(); j++){
            char c = s[j];
            window[c]++;

            if(need_map.count(c) && window[c] == need_map[c]){
                formered++; // formered tab hi ++ hoga jab vo character need me hoga, jab koi aur character aayega tab voh aa toh jayega window mw but formered ka size nahi badayega.
            } 
            while(formered == required){
                
                if(j-i+1<minLength){
                    minLength = j-i+1;
                    start = i;
                }
                char leftChar = s[i];
                window[leftChar]--; //  we did this and not directly i beacuse, window is character based not index based. window is a map. so we need key for it, not index. so we are passing the key and ecrementingi it. 
                if( need_map.count(leftChar) && window[leftChar] < need_map[leftChar]){
                    formered--;
                }
                i++;

            }
        }
        if(minLength == INT_MAX ) return "";
        return s.substr(start, minLength);
    }
};