#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


// 992. Subarrays with K Different Integers.
// Given an integer array nums and an integer k, return the number of good subarrays of nums.

// A good array is an array where the number of different integers in that array is exactly k.

// For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
// A subarray is a contiguous part of an array.

 // dekh, this question is so much like the previous one, atmost k distinct elements, and i undestood this question sop well right? 
 // here, you just jhave to use your brain and figure out how uou a chnage the almost same code to solve this question and you are done.
 //so, in this question, we need to find sub arrays which has only k distinct characters at once.
 //when we read this we know tha, we will have use map. in tha distinct characters se jwada jayega toh we gave to do i++ right.
 // but how do we coiunt the sub arrays that is the trick, here you can not just use coun tvariable , and whnebvr windowe becomes valid yo8 increse. thta is wring.
 //so, at every j we are checkig ki what are the sub arrays that will end with ythis character. how do we find tjhat j-i+1 gives the characters till that elemnt and that is how you fiund out oo. 
 // and then whe you have like if k is 2. fiorst you check with both 1 and 2, like sub arrays thta can have at most 2 so it will have bgoth 2 and at most 1. 
 //then you will find atmost k-1. that is atmost 1
 //then subtract  atmost k with k-1. you will get the sub arrays with exactly k distinct elements.
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
         return atMostk(nums, k) - atMostk(nums , k-1);
    }
    private:
    int atMostk( vector<int>& nums, int k){
        int i =0, count =0;
        unordered_map<int, int> map;
        for(int j =0;j<nums.size(); j++){
            map[nums[j]]++;
            while(map.size() > k ){
                map[nums[i]]--;

                if(map[nums[i]]==0){
                    map.erase(nums[i]);
                }
                i++;
            }
            count+=(j-i+1); // this is the heart of the problem, here we are counting at each j thta if this is he j then what are the subarrays that are ending with this j. 
            
        }
        return count;

    }
};
int main(){
    Solution sol;
    vector<int> nums = {1,2,1,2,3};
    int k = 2;
    int result = sol.subarraysWithKDistinct(nums , k);
    cout<<"The number of subarrays with exactly k distinct integers is: "<<result<<endl;
    return 0;
}