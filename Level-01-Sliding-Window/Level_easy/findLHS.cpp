#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        for( int value : nums){
            mp[value]++;
        }
        int ans= 0;
        for( auto &it : mp){
            int x = it.first;
                if( mp.count(x+1) ){
                    ans = max(ans, mp[x] +mp[x+1]); // we dont explicitly amkle pairs of x and x+1, but mentally we are finding the frequency of x and x+1 whichever pair of this x, x+1 is more we take taht as answer. 
                }
        }
       return ans;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1,3,2,2,5,2,3,7};
    int result = sol.findLHS(nums);
    cout<<"The length of the longest harmonious subsequence is: "<<result<<endl;
    return 0;
}