#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
// 219. Contains Duplicate II

// this is a invariable size sliding window question , as the window size is not given , we have to maintain the window of size k while traversing the array.
// we did not explicitly set the condtion for invaliud window, but the condiotion for valid window is set, so when the window becomes invalid we just remove the starting element of the window.
// we sue set because set does not allow duplicate elements, so when we find a duplicate element in the set, we can return true.
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i =0;
        unordered_set<int>st;
        for(int j=0; j<nums.size(); j++){
            if ( st.count(nums[j])){
                return true;
            }
            st.insert(nums[j]);
            if( j-i >=k){
                st.erase(nums[i]);
                i++;
            }

        }
        return false;

        }
    
};int main(){
    Solution sol;
    vector<int> nums = {1,2,3,1,2,3};
    int k = 2;
    bool result = sol.containsNearbyDuplicate(nums, k);
    if(result){
        cout<<"Contains nearby duplicate within distance "<<k<<endl;
    }
    else{
        cout<<"Does not contain nearby duplicate within distance "<<k<<endl;
    }
    return 0;
}