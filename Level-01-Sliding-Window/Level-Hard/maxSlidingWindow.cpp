#include<iostream>
#include<deque>
#include<vector>
using namespace std;
// ### Problem Statement -239. Sliding Window Maximum
// You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

// Return the max sliding window.

//Now, here i will be listing the mistakes i did while solving this question for the first time and those are the things you ust keep in mind while solving siliar pattern. 
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq; // we have to use dequeue , as we need the acces it from both the sides.

        // mistake-1 i used a queue, when i was solving for the first time.
        int i =0, j=0;
        int n = nums.size();
        // we need to mkae sure in this question we are storing the index and not values, as duplicate valueswill become congusing
        //and index is more reliable.
        vector<int>ans;
        while( j< n){
            while(!dq.empty() &&  nums[j] >= nums[dq.back()]){ // here, i got confused, we are storing index so we, if we have to acces a value we need to write like nums[dq.back()] and not like dq.back()
                dq.pop_back();
            }
            dq.push_back(j);// this is the point where i made mistake first time, i wrote nums[j] here, but we have to store index not value.
             // now we have to remove the elements which are out of the window

            
            if(!dq.empty() && dq.front()< i) // we will remove the elements which are out of the window
                dq.pop_front();
            if(j-i+1<k)
                j++;
            else{
              ans.push_back(nums[dq.front()]); // here also i made mistake first time, i wrote dq.front() directly, but we have to write nums[dq.front()] as dq is storing index not value.
               i++;
            j++;
            }
            
        }
        return ans;
           
    }

}; int main(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
int k =3;
    Solution sol;
    vector<int> result = sol.maxSlidingWindow(nums, k);
    cout<<"The maximums in each sliding window are: ";
    for(int num : result){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}