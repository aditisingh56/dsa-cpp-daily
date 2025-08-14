// In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has n empty baskets, the ith basket is at position[i], Morty has m balls and needs to distribute the balls into the baskets such that the minimum magnetic force between any two balls is maximum.

// Rick stated that magnetic force between two different balls at positions x and y is |x - y|.

// Given the integer array position and the integer m. Return the required force.

// Question number: 1552

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool canPlaceBalls(vector <int> &position, int mid, int m){
     int count =1 , lastPos = position[0];
     int n = position.size();
     for(int i =1;i<n;i++){
        if(position[i] - lastPos >= mid){
            count++;
            lastPos = position[i];
        }
        if( count >= m) return true;
     }
     return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin() , position.end());
        int start = 1;
        int end = position.back() - position.front();
        int ans = 0;
        
        while(start<=end){
        int mid = start+(end-start)/2;
        if(canPlaceBalls(position , mid, m)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        }
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> position = {1, 2, 3, 4, 5};
    int m = 3;
    cout << sol.maxDistance(position, m) << endl;
    return 0;
}