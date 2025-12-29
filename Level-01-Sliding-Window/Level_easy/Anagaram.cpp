// I'm trying to solve the anagram question with map
// this approach will be more optimized and better than the one present in medium level questions
//i'm solving this while i restarted my dsa journey
#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> findingAnagrams(string s, string p){
    unordered_map<char, int> mp;
    vector<int>ans;
     for(char ch :p){
        mp[ch]++;
     }
     int i=0, j=0, count =mp.size(); // we are usimg length not size because size is for containers like vectors and maps not for strings
     int k =p.length();
     while(j < s.length()){
        if(mp.find(s[j]) !=mp.end()){
            mp[s[j]]--;
            if(mp[s[j]] == 0){
                count--;
            }
        }
        if(j - i + 1 == k){
            if(count == 0){
                ans.push_back(i);
            }
            if(mp.find(s[i]) != mp.end()){
                
                if(mp[s[i]] == 0){
                    count++;// this says if its frequncy is 0, it measn its count also will be 0. so we increse the count 
                }
                mp[s[i]]++; // if the char at start of window is present in map, we increase its frequency by 1 as we are removing it from the window
            }// like if the frequnecy have not becopme 0, it means w emight not have chnaged count. but we might have chnaged frequency. so we just increase frequency by 1
            i++;
        }
        j++;
     }
     return ans;
}// see the lofic here is, first we count the frequency of each element in the p and put thna in map. 
// so map has frequency of each character of p
// now, as we tranverse in s and we find thje same charactyer which is there in map, we cancel them by 1. like shopwing ki i found it once.
// when the frequency of specific charater become 0. it means we have found that number as many times as i pattern . than we increse the count by 1. 
// this indicates that, voh character ka like a saare mil gaye. so then , we decrement the count variable by 1.
// because the count was before the length of the pattern string , so wehn all the characters are found, the count will become 0.
int main(){
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> result = findingAnagrams(s, p);
    for(int index : result){
        cout << index << " ";
    }// we should get 0 6 as output
    return 0;
}