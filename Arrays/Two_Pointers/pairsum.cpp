#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector <int> nums ,  int target){
    vector<int> ans;
    int n=nums.size();
    int i=0;
    int j=n-1;
    while(i<j){
        int ps=nums[i]+nums[j];
        if(ps==target){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
        else if(ps<target){
            i++;
        }
        else{
            j--;
        }
    }return ans;
} 
int main() {

    vector<int> arr = {2 , 7 , 11,15};
    int target = 13;
    vector<int> ans = pairSum(arr, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}