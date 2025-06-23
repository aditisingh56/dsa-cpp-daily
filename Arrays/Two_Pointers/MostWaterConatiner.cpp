#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int lp =0;
        int rp =n-1;
        int maxwater =0;
        while(lp<rp){
            int w = rp-lp;
            int h = min(height[lp] , height[rp]);
            int area = w*h;
            maxwater = max(maxwater , area);


            height[lp] > height[rp]? rp-- : lp++;
        }
        return maxwater;
    }
    
};
int main() {
    Solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum area of water that can be contained: " << sol.maxArea(height) << endl;
    return 0;
}