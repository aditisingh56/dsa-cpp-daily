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
            if( j-i >=k){ // I got very confused here, here what we are doing is.  see the condiotion of valid window was rth difference of both the indexces must be smaller or equal to k, right?
                // so what we did is , we took the opposite condiotion of the valid. that is tjhe difference of both the conditions are greater or equal to k, this conditon also maintains are window of size k.  
                // this condiiton malkes sures that all the window is always positve.
                // what happens is, first we cant have the elemnt already in the set, so that elemnt we insert in the set. 
                // thwn what we di is , fron nwext elemnt we keep checking if the elemnt is laready in the set, if thje element is already in the set . what we doi is, we return true. after that we check if the window is still bvalid, if yes good. if not we remove the oldest i. this way all the windopw is always valid just on ecindiiton we check 
                
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