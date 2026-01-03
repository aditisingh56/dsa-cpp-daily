#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
       int i =0, j = 0;
       long long sum =0; // when i firsted coded i did not write long long here, this must be long long 
       double average_value = INT_MIN; // i had forgot to wrote this as double 
       double current_value;// eventhsi , i had forhgot to write this as double 
       int n = nums.size(); // i di nums().size-1;  this is wrong
       while(j<n){
              sum += nums[j];
               if(j-i+1 < k)
                   j++;
                else{
                    current_value = sum/(double)k;
                    average_value = max(average_value ,current_value ); // i had forgot a semoilconon here
                    sum-=nums[i];
                    
                i++;// i wrote the bioth incrementtion outside the loop, but correct way is this. 
                    j++;
                }
                
            
       }
       return average_value;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    double result = sol.findMaxAverage(nums, k);
    cout << "Maximum average subarray of length " << k << " is: " << result << endl;
    return 0;
}